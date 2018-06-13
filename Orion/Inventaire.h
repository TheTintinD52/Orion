#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "Item.h"
#include "vector"

class Inventaire
{
public:
    Inventaire();
    virtual ~Inventaire();
    Inventaire(const Inventaire&);
    Inventaire& operator=(const Inventaire&);

    void affiche();
    void init(int);

protected:
    Item *m_tab;
};

#endif // INVENTAIRE_H
