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

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		PNJ *mg;
		const PNJ *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
	}
	return *this;
}

void Animal::affiche()
{
	PNJ::affiche();
}
