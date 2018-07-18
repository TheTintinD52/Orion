#include "Animal.h"

using namespace std;

Animal::Animal() : PNJ()
{

}

Animal::~Animal()
{

}

Animal::Animal(const Animal& other) : PNJ(other)
{

}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
	{
		PNJ *mg;
		const PNJ *md;
		mg = this;
		md = &rhs;
		(*mg) = (*md);
	}
	return *this;
}

void Animal::affiche()
{
	PNJ::affiche();
}
