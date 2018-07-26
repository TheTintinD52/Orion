#include "iostream"
#include "Objet.h"
#include "Inventaire.h"

using namespace std;

Inventaire::Inventaire() : m_nb(0)
{
	m_tab.clear();
}

Inventaire::Inventaire(size_t nb) : m_nb(nb)
{
	m_tab.resize(m_nb);
}

Inventaire::~Inventaire()
{

}

Inventaire::Inventaire(const Inventaire& other) : m_nb(other.m_nb)
{
	m_tab.resize(m_nb);
}

Inventaire& Inventaire::operator=(const Inventaire& other)
{
	if (this != &other)
	{
		m_nb = other.m_nb;
		m_tab.resize(other.m_nb);
	}
	return *this;
}

void Inventaire::affiche() const
{
	if (!(m_tab.empty()))
	{
		cout << "Inventaire : " << endl;
		for (auto tab : m_tab)
		{
			if (tab.Getid() == 0)
			{
				
			}
			else
			{
				tab.affiche();
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

	for (auto& tab : m_tab)
	{
		if (tab.Getid() == 0 && present != true)
		{
			tab = item;
			present = true;
		}
		else
		{

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

int Inventaire::Getnb() const
{
	return m_nb;
}

void Inventaire::Setnb(size_t nb)
{
	m_nb = nb;
}