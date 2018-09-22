#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "iostream"
#include "vector"
#include "Objet.h"

class Inventaire
{
public:
	Inventaire();
	Inventaire(size_t);
	virtual ~Inventaire();
	Inventaire(const Inventaire&);
	Inventaire& operator=(const Inventaire&);

	void affiche() const;
	void init(int);
	void init(Objet &);
	void Jeter(Objet &);

	size_t Getnb() const;
	void Setnb(size_t);

protected:
	size_t m_nb;
	std::vector<Objet> m_tab;
};

#endif