#include "Personnage.h"

using namespace std;

Personnage::Personnage() : m_nom("Error"), m_vie(0), m_endurance(0)
{

}

Personnage::Personnage(int vie) : m_nom("Error"), m_vie(vie), m_endurance(0)
{

}

Personnage::Personnage(string nom, int vie) : m_nom(nom), m_vie(vie), m_endurance(0)
{

}

Personnage::Personnage(string nom, int vie, int endurance) : m_nom(nom), m_vie(vie), m_endurance(endurance)
{

}

Personnage::~Personnage()
{

}

Personnage::Personnage(const Personnage& other) : m_vie(other.m_vie), m_nom(other.m_nom), m_endurance(other.m_endurance)
{

}

// operators overloading

Personnage& Personnage::operator=(const Personnage& other)
{
	if (this != &other)
	{
		m_vie = other.m_vie;
		m_nom = other.m_nom;
		m_endurance = other.m_endurance;
	}
	return *this;
}

// methodes

void Personnage::affiche() const
{
	cout << "Nom : " << m_nom << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Endurance : " << m_endurance << endl;
}

void Personnage::recevoirDegats(int nbDegats)
{
	cout << m_nom << " recoit " << nbDegats << " points de vie en moins." << endl;

	m_vie -= nbDegats;

	if (m_vie <= 0)
		m_vie = 0;
}

// accesseurs

int Personnage::Getvie() const
{
	return m_vie;
}

void Personnage::Setvie(int vie)
{
	m_vie = vie;
}

string Personnage::Getnom() const
{
	return m_nom;
}

void Personnage::Setnom(string nom)
{
	m_nom = nom;
}

int Personnage::Getendurance() const
{
	return m_endurance;
}

void Personnage::Setendurance(int endurance)
{
	m_endurance = endurance;
}