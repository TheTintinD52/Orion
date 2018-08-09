#ifndef OBJET_H
#define OBJET_H

#include "iostream"
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

	void affiche() const;
	void init();

	int Getid() const;
	void Setid(int val);
	std::string Getnom() const;
	void Setnom(std::string);

protected :
	int m_id;
	std::string m_nom;
};

#endif