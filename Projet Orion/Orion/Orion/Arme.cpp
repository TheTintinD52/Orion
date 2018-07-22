#include "iostream"
#include "Arme.h"
#include "string"

using namespace std;

Arme::Arme() : Outillage(), m_degat(0)
{

}

Arme::Arme(int id) : Outillage(id), m_degat(0)
{

}

Arme::Arme(int id, string nom) : Outillage(id, nom), m_degat(0)
{

}

Arme::Arme(int id, string nom, int degat) : Outillage(id, nom), m_degat(degat)
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

void Arme::affiche() const
{
	cout << "Arme : " << endl;
	Outillage::affiche();
	cout << "Degat arme: " << m_degat << endl;
}

int Arme::Getdegat() const
{
	return m_degat;
}

void Arme::Setdegat(int degat)
{
	m_degat = degat;
}