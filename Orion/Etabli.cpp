#include "Etabli.h"
#include "string"

using namespace std;

Etabli::Etabli() : Block()
{

}

Etabli::Etabli(int id) : Block(id)
{

}

Etabli::Etabli(int id, string nom) : Block(id, nom)
{

}

Etabli::Etabli(int id, string nom, double velMinage) : Block(id, nom, velMinage)
{

}

Etabli::Etabli(int id, string nom, double velMinage, Coordonnees &c) : Block(id, nom, velMinage, c)
{

}

Etabli::~Etabli()
{

}

Etabli::Etabli(const Etabli& other) : Block(other)
{

}

Etabli& Etabli::operator=(const Etabli& rhs)
{
    if (this != &rhs)
    {
        Block *mg;
        const Block *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
    }
    return *this;
}
