#include "Outillage.h"

using namespace std;

Outillage::Outillage() : Outillage(0, "Default", 0)
{

}

Outillage::Outillage(int id) : Outillage(id, "Default", 0)
{

}

Outillage::Outillage(int id, string nom) : Outillage(id, nom , 0)
{

}

Outillage::Outillage(int id, string nom, int dura) : Objet(id, nom), m_dura(dura)
{

}

Outillage::~Outillage()
{

}

Outillage::Outillage(const Outillage& other) : Objet(other), m_dura(other.m_dura)
{

}

// operators overloading

Outillage& Outillage::operator=(const Outillage& other)
{
	if (this != &other)
	{
		Objet *mg;
		const Objet *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		m_dura = other.m_dura;
	}
	return *this;
}

// methodes

void Outillage::affiche() const
{
	Objet::affiche();
	cout << "Durabilite outil : " << m_dura << endl;
}

// accesseurs

int Outillage::Getdura() const
{
	return m_dura;
}

void Outillage::Setdura(int dura)
{
	m_dura = dura;
}