#include <Entite\Entite.h>

using namespace std;

Entite::Entite() : Entite(0, 0, "Default")
{

}

Entite::Entite(int vie) : Entite(vie, 0 , "Default")
{

}

Entite::Entite(int vie, string nom) : Entite(vie, 0, nom)
{

}

Entite::Entite(int vie, int endurance, string nom) : m_vie(vie), m_endurance(endurance), m_nom(nom)
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

int Entite::Getendurance() const
{
	return m_endurance;
}

void Entite::Setendurance(int endurance)
{
	m_endurance = endurance;
}

string Entite::Getnom() const
{
	return m_nom;
}

void Entite::Setnom(string nom)
{
	m_nom = nom;
}