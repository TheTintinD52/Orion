#include "Outil.h"

using namespace std;

Outil::Outil() : Outil(0, "Default", 0)
{

}

Outil::Outil(int id) : Outil(id, "Default", 0)
{

}

Outil::Outil(int id, string nom) : Outil(id, nom, 0)
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

// operators overloading

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

// methodes

void Outil::affiche()
{
	cout << "Outil : " << endl;
	Outillage::affiche();
}
