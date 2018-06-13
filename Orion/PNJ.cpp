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

PNJ& PNJ::operator=(const PNJ& rhs)
{
    if (this != &rhs)
    {
        Personnage *mg;
        const Personnage *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
    }
    return *this;
}

void PNJ::affiche()
{
    Personnage::affiche();
}
