#include "iostream"
#include "string"
#include "Joueur.h"

using namespace std;

Joueur::Joueur() : Personnage(), m_faim(100), m_inventaire(NULL), m_arme(NULL), m_outil(NULL)
{

}

Joueur::Joueur(int vie) : Personnage(vie), m_faim(100), m_inventaire(NULL), m_arme(NULL), m_outil(NULL)
{

}

Joueur::Joueur(string nomPerso, int vie) : Personnage(nomPerso, vie), m_faim(100), m_inventaire(NULL), m_arme(NULL), m_outil(NULL)
{

}

Joueur::Joueur(string nomPerso, int vie, int endu) : Personnage(nomPerso, vie, endu), m_faim(100), m_inventaire(NULL), m_arme(NULL), m_outil(NULL)
{

}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim) : Personnage(nomPerso, vie, endu), m_faim(faim), m_inventaire(NULL), m_arme(NULL), m_outil(NULL)
{

}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &inventory) : Personnage(nomPerso, vie, endu), m_faim(faim), m_arme(NULL), m_outil(NULL)
{
	m_inventaire = new Inventaire(inventory);
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &inventory, Arme &arme) : Personnage(nomPerso, vie, endu), m_faim(faim), m_outil(NULL)
{
	m_inventaire = new Inventaire(inventory);
	m_arme = new Arme(arme);
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &inventory, Arme &arme, Outil &outil) : Personnage(nomPerso, vie, endu), m_faim(faim)
{
	m_inventaire = new Inventaire(inventory);
	m_arme = new Arme(arme);
	m_outil = new Outil(outil);
}

Joueur::~Joueur()
{
	delete(m_inventaire);
	delete(m_arme);
	delete(m_outil);
}

Joueur::Joueur(const Joueur& other) : Personnage(other)
{
	m_faim = other.m_faim;
	m_inventaire = new Inventaire(*(other.m_inventaire));
	m_arme = new Arme(*(other.m_arme));
	m_outil = new Outil(*(other.m_outil));
}

Joueur& Joueur::operator=(const Joueur& other)
{
	if (this != &other)
	{
		Personnage *mg;
		const Personnage *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		delete(m_inventaire);
		delete(m_arme);
		delete(m_outil);
		m_faim = other.m_faim;
		m_inventaire = new Inventaire(*(other.m_inventaire));
		m_arme = new Arme(*(other.m_arme));
		m_outil = new Outil(*(other.m_outil));
	}
	return *this;
}

void Joueur::affiche() const
{
	Personnage::affiche();
	cout << "Faim max : " << m_faim << endl;
	if (m_arme != NULL)
	{
		m_arme->affiche();
	}
	if (m_outil != NULL)
	{
		m_outil->affiche();
	}
	cout << "Je suis le personnage du joueur." << endl;
}

void Joueur::afficheInventaire() const
{
	if (m_inventaire != NULL)
	{
		m_inventaire->affiche();
	}
}

void Joueur::changerArme(Arme &arme)
{
	delete(m_arme);
	cout << m_nom << " trouve " << arme.Getnom() << " et s'en equipe." << endl;
	m_arme = new Arme(arme);
}

void Joueur::changerOutil(Outil &outil)
{
	delete(m_outil);
	cout << m_nom << " trouve " << outil.Getnom() << " et s'en equipe." << endl;
	m_outil = new Outil(outil);
}

void Joueur::attaquer(Personnage &cible)
{
	cout << m_nom << " attaque " << cible.Getnom() << "." << endl;

	if (m_arme != NULL)
		cible.recevoirDegats(m_arme->Getdegat());
	else
		cible.recevoirDegats(5);
}

void Joueur::prendreItem(Objet &item)
{
	m_inventaire->init(item);
}

void Joueur::jeterItem(Objet &item)
{
	m_inventaire->Jeter(item);
}

void Joueur::boirePotionDeVie(int qtVie)
{
	cout << m_nom << " boit une potion qui lui redonne " << qtVie << " points de vie." << endl;
	m_vie += qtVie;

	if (m_vie > 100)
		m_vie = 100;
}

int Joueur::Getfaim() const
{
	return m_faim;
}
void Joueur::Setfaim(int faim)
{
	m_faim = faim;
}