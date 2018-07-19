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

void PNJ::affiche()
{
	Personnage::affiche();
}
