#include "Ennemi.h"

using namespace std;

Ennemi::Ennemi() : Personnage(), m_arme(NULL)
{

}

Ennemi::Ennemi(int vie) : Personnage(vie), m_arme(NULL)
{

}

Ennemi::Ennemi(string nomPerso, int vie) : Personnage(nomPerso, vie), m_arme(NULL)
{

}

Ennemi::Ennemi(string nomPerso, int vie, int endu) : Personnage(nomPerso, vie, endu), m_arme(NULL)
{

}

Ennemi::Ennemi(string nomPerso, int vie, int endu, Arme &arme) : Personnage(nomPerso, vie, endu)
{
	m_arme = new Arme(arme);
}

Ennemi::~Ennemi()
{
	delete(m_arme);
}

Ennemi::Ennemi(const Ennemi& other) : Personnage(other)
{
	m_arme = new Arme(*(other.m_arme));
}

// operators overloading

Ennemi& Ennemi::operator=(const Ennemi& other)
{
	if (this != &other)
	{
		Personnage *mg;
		const Personnage *md;
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
	Personnage::affiche();
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
