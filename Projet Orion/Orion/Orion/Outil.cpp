#include "Outil.h"
#include "iostream"
#include "string"

using namespace std;

Outil::Outil() : Outillage()
{

}

Outil::Outil(int id) : Outillage(id)
{

}

Outil::Outil(int id, string nom) : Outillage(id, nom)
{

}

Outil::Outil(int id, string nom, int dura) : Outillage(id, nom, dura)
{

}

Outil::~Outil()
{

}

Outil::Outil(const Outil& other) : Outillage(other)
{

}

Outil& Outil::operator=(const Outil& other)
{
	if (this != &other)
	{
		Outillage *mg;
		const Outillage *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
	}
	return *this;
}

void Outil::affiche()
{
	cout << "Outil : " << endl;
	Outillage::affiche();
}
