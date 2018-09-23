#include "Arme.h"

using namespace std;

Arme::Arme() : Arme(0, "Default", 0, 0)
{

}

Arme::Arme(int id) : Arme(id, "Default", 0, 0)
{

}

Arme::Arme(int id, string nom) : Arme(id, nom, 0, 0)
{

}

Arme::Arme(int id, string nom, int degat) : Arme(id, nom, degat, 0)
{

}

Arme::Arme(int id, string nom, int degat, int dura) : Outillage(id, nom, dura), m_degat(degat)
{

}

Arme::~Arme()
{

}

Arme::Arme(const Arme& other) : Outillage(other), m_degat(other.m_degat)
{

}

// operators overloading

Arme& Arme::operator=(const Arme& other)
{
	if (this != &other)
	{
		Outillage *mg;
		const Outillage *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		m_degat = other.m_degat;
	}
	return *this;
}

// methodes

void Arme::affiche() const
{
	cout << "Arme : " << endl;
	Outillage::affiche();
	cout << "Degat arme: " << m_degat << endl;
}

// accesseurs

int Arme::Getdegat() const
{
	return m_degat;
}

void Arme::Setdegat(int degat)
{
	m_degat = degat;
}