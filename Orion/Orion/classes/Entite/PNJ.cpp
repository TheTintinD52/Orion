#include "PNJ.h"

using namespace std;

PNJ::PNJ() : Entite()
{

}

PNJ::~PNJ()
{

}

PNJ::PNJ(const PNJ& other) : Entite(other)
{

}

// operators overloading

PNJ& PNJ::operator=(const PNJ& other)
{
	if (this != &other)
	{
		Entite *mg;
		const Entite *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
	}
	return *this;
}

// methodes

void PNJ::affiche() const
{
	Entite::affiche();
}
