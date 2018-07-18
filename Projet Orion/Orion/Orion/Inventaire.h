#pragma once
#include "Objet.h"

class Inventaire
{
public:
	Inventaire();
	Inventaire(int);
	virtual ~Inventaire();
	Inventaire(const Inventaire&);
	Inventaire& operator=(const Inventaire&);

	void affiche();
	void init(int);
	void init(Objet &);
	void Jeter(Objet &);

protected:
	int m_nb;
	Objet *m_tab;
};


