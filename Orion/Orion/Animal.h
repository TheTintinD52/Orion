#ifndef ANIMAL_H
#define ANIMAL_H

#include "iostream"
#include "PNJ.h"

class Animal : public PNJ
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal&);
	Animal& operator=(const Animal&);

	void affiche() const;
};

#endif