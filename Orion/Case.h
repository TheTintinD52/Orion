#ifndef CASE_H
#define CASE_H

#include "Item.h"
#include "Emplacement.h"

class Case
{
public:
    Case();
    Case(int, std::string);
    Case(int, std::string, int, int);
    virtual ~Case();
    Case(const Case& other);
    Case& operator=(const Case& other);

    void affiche();

protected:
    Item *m_item;
    Emplacement *m_position;
};

#endif // CASE_H
