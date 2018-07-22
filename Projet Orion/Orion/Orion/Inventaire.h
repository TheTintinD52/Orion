#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "Objet.h"

class Inventaire
{
public:
	Inventaire();
	Inventaire(int);
	virtual ~Inventaire();
	Inventaire(const Inventaire&);
	Inventaire& operator=(const Inventaire&);

	void affiche() const;
	void init(int);
	void init(Objet &);
	void Jeter(Objet &);

	int Getnb() const;
	void Setnb(int);

protected:
	int m_nb;
	Objet *m_tab;
};

#endif