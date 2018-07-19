#include "iostream"
#include "Objet.h"
#include "Inventaire.h"

using namespace std;

Inventaire::Inventaire() : m_nb(0), m_tab(NULL)
{

}

Inventaire::Inventaire(int nb) : m_nb(nb)
{
	m_tab = new Objet[m_nb];
	for (int i = 0; i < m_nb; i++)
	{

	}
}

Inventaire::~Inventaire()
{
	// delete(m_tab); ???????????????????????????
}

Inventaire::Inventaire(const Inventaire& other) : m_nb(other.m_nb)
{
	m_tab = new Objet[20];
	for (int i = 0; i<20; i++)
	{
	}
}

Inventaire& Inventaire::operator=(const Inventaire& other)
{
	if (this != &other)
	{
		m_nb = other.m_nb;
		delete(m_tab);
		m_tab = new Objet[m_nb];
		for (int i = 0; i<m_nb; i++)
		{
		}
	}
	return *this;
}

void Inventaire::affiche()
{
	int i;

	if (m_tab != NULL)
	{
		cout << "Inventaire : " << endl;
		for (i = 0; i < m_nb; i++)
		{
			if (m_tab[i].Getid() == 0)
			{
				
			}
			else
			{
				m_tab[i].affiche();
			}
		}
	}
}

void Inventaire::init(int nb)
{
	if (nb > 19)
	{

	}
	else if (nb < 0)
	{

	}
	else
	{
		m_tab[nb].init();
	}
}

void Inventaire::init(Objet &item)
{
	bool present = false;

	for (int i = 0; i<m_nb; i++)
	{
		if (m_tab[i].Getid() == 0 && present != true)
		{
			m_tab[i] = item;
			present = true;
		}
		else
		{

		}
	}
}

void Inventaire::Jeter(Objet &item)
{
	for (int i = 0; i<m_nb; i++)
	{
		if (m_tab[i] == item)
		{
			m_tab[i].Setid(0);
			m_tab[i].Setnom("None");
		}
	}
}
