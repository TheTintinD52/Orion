#include "Outillage.h"
#include "iostream"

using namespace std;

Outillage::Outillage() : Objet(), m_dura(0)
{

}

Outillage::Outillage(int id) : Objet(id), m_dura(0)
{

}

Outillage::Outillage(int id, string nom) : Objet(id, nom), m_dura(0)
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

void Outillage::affiche() const
{
	Objet::affiche();
	cout << "Durabilite outil : " << m_dura << endl;
}

int Outillage::Getdura() const
{
	return m_dura;
}

void Outillage::Setdura(int dura)
{
	m_dura = dura;
}