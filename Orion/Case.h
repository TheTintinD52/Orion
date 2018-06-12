#ifndef CASE_H
#define CASE_H

#include "Item.h"
#include "Coordonnees.h"

class Case
{
public:
    Case();
    Case(Item &);
    Case(Item &, Coordonnees &);
    virtual ~Case();
    Case(const Case& other);
    Case& operator=(const Case& other);

    void affiche();

protected:
    Item *m_item;
    Coordonnees *m_position;
};

#endif // CASE_H
