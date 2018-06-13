#ifndef ANIMAL_H
#define ANIMAL_H

#include "PNJ.h"

class Animal : public PNJ
{
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal&);

    void affiche();

protected:
};

#endif // ANIMAL_H
