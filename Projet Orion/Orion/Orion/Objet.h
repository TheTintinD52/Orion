#pragma once

#include "string"

class Objet
{
public:
	Objet();
	Objet(int);
	Objet(int, std::string);
	virtual ~Objet();
	Objet(const Objet&);
	Objet& operator=(const Objet&);

	bool operator==(const Objet&);

	void affiche();
	void init();

	int Getid()
	{
		return m_id;
	}
	void Setid(int val)
	{
		m_id = val;
	}
	std::string Getnom()
	{
		return m_nom;
	}
	void Setnom(std::string val)
	{
		m_nom = val;
	}

protected :
	int m_id;
	std::string m_nom;
};

