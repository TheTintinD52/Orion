#include "Outil.h"
#include "iostream"
#include "Arme.h"
#include "string"

using namespace std;

Outil::Outil() : Outillage()
{

}

Outil::Outil(int id) : Outillage(id)
{

}

Outil::Outil(int id, string nom) : Outillage(id, nom)
{

}

Outil::Outil(int id, string nom, int dura) : Outillage(id, nom, dura)
{

}

Outil::~Outil()
{

}

Outil::Outil(const Outil& other) : Outillage(other)
{

}

Outil& Outil::operator=(const Outil& rhs)
{
    if (this != &rhs)
    {
        Outillage *mg;
        const Outillage *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
    }
    return *this;
}

void Outil::affiche()
{
    cout << "Outil : " << endl;
    Outillage::affiche();
}
