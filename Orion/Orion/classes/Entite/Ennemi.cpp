#include "Ennemi.h"

using namespace std;

Ennemi::Ennemi() : Entite(0, 0 ,"Default"), m_arme(NULL)
{

}

Ennemi::Ennemi(int vie) : Entite(vie, 0, "Default"), m_arme(NULL)
{

}

Ennemi::Ennemi(int vie, string nomPerso) : Entite(vie, 0, nomPerso), m_arme(NULL)
{

}

Ennemi::Ennemi(int vie, int endu, string nomPerso) : Entite(vie, endu, nomPerso), m_arme(NULL)
{

}

Ennemi::Ennemi(int vie, int endu, string nomPerso, Arme &arme) : Entite(vie, endu, nomPerso)
{
	m_arme = new Arme(arme);
}

Ennemi::~Ennemi()
{
	delete(m_arme);
}

Ennemi::Ennemi(const Ennemi& other) : Entite(other)
{
	m_arme = new Arme(*(other.m_arme));
}

// operators overloading

Ennemi& Ennemi::operator=(const Ennemi& other)
{
	if (this != &other)
	{
		Entite *mg;
		const Entite *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		delete(m_arme);
		m_arme = new Arme(*(other.m_arme));
	}
	return *this;
}

// methodes

void Ennemi::affiche() const
{
	Entite::affiche();
	if (m_arme != NULL)
	{
		m_arme->affiche();
	}
	cout << "Je suis un ennemi." << endl;
}

void Ennemi::boirePotionDeVie(int qtVie)
{
	cout << m_nom << " boit une potion qui lui redonne " << qtVie << " points de vie." << endl;
	m_vie += qtVie;

	if (m_vie > 100)
		m_vie = 100;
}
