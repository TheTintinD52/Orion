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

// operators overloading

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

// methodes

void Animal::affiche() const
{
	PNJ::affiche();
}
