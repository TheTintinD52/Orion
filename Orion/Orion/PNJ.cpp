#include "PNJ.h"

using namespace std;

PNJ::PNJ() : Personnage()
{

}

PNJ::~PNJ()
{

}

PNJ::PNJ(const PNJ& other) : Personnage(other)
{

}

// operators overloading

PNJ& PNJ::operator=(const PNJ& other)
{
	if (this != &other)
	{
		Personnage *mg;
		const Personnage *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
	}
	return *this;
}

// methodes

void PNJ::affiche() const
{
	Personnage::affiche();
}
