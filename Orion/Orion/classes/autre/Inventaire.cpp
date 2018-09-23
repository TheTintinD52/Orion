#include "Inventaire.h"

using namespace std;

Inventaire::Inventaire() : Inventaire(0)
{
	
}

Inventaire::Inventaire(size_t nb) : m_nb(nb)
{
	if (m_nb == 0)
	{
		m_nb = 1;
		m_tab.resize(m_nb);
	}
	else
	{
		m_tab.resize(m_nb);
	}
}

Inventaire::~Inventaire()
{

}

Inventaire::Inventaire(const Inventaire& other) : m_nb(other.m_nb)
{
	m_tab.resize(m_nb);
}

// operators overloading

Inventaire& Inventaire::operator=(const Inventaire& other)
{
	if (this != &other)
	{
		m_nb = other.m_nb;
		m_tab.resize(other.m_nb);
	}
	return *this;
}

// methodes

void Inventaire::affiche() const
{
	if (!(m_tab.empty()))
	{
		cout << "Inventaire : " << endl;
		for (auto tab : m_tab)
		{
			if (!(tab.Getid() == 0))
			{
				tab.affiche();
			}
		}
	}
}

void Inventaire::init(int nb)
{
	if (!(nb > 19) || !(nb < 0)) // a tester !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		m_tab[nb].init();
	}
	/*else if (nb < 0)
	{

	}*/
	else
	{
		
	}
}

void Inventaire::init(Objet &item)
{
	bool present = false;

	for (auto& tab : m_tab)
	{
		if (tab.Getid() == 0 && present != true)
		{
			tab = item;
			present = true;
		}
	}
}

void Inventaire::Jeter(Objet &item)
{
	for (auto& tab : m_tab)
	{
		if (tab == item)
		{
			tab.Setid(0);
			tab.Setnom("None");
		}
	}
}

// accesseurs

size_t Inventaire::Getnb() const
{
	return m_nb;
}

void Inventaire::Setnb(size_t nb)
{
	m_nb = nb;
}