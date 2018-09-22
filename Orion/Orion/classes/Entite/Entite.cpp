#include "Entite.h"

using namespace std;

Entite::Entite() : m_nom("Error"), m_vie(0), m_endurance(0)
{

}

Entite::Entite(int vie) : m_nom("Error"), m_vie(vie), m_endurance(0)
{

}

Entite::Entite(string nom, int vie) : m_nom(nom), m_vie(vie), m_endurance(0)
{

}

Entite::Entite(string nom, int vie, int endurance) : m_nom(nom), m_vie(vie), m_endurance(endurance)
{

}

Entite::~Entite()
{

}

Entite::Entite(const Entite& other) : m_vie(other.m_vie), m_nom(other.m_nom), m_endurance(other.m_endurance)
{

}

// operators overloading

Entite& Entite::operator=(const Entite& other)
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

void Entite::affiche() const
{
	cout << "Nom : " << m_nom << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Endurance : " << m_endurance << endl;
}

void Entite::recevoirDegats(int nbDegats)
{
	cout << m_nom << " recoit " << nbDegats << " points de vie en moins." << endl;

	m_vie -= nbDegats;

	if (m_vie <= 0)
		m_vie = 0;
}

// accesseurs

int Entite::Getvie() const
{
	return m_vie;
}

void Entite::Setvie(int vie)
{
	m_vie = vie;
}

string Entite::Getnom() const
{
	return m_nom;
}

void Entite::Setnom(string nom)
{
	m_nom = nom;
}

int Entite::Getendurance() const
{
	return m_endurance;
}

void Entite::Setendurance(int endurance)
{
	m_endurance = endurance;
}