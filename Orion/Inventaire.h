#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "Item.h"

class Inventaire
{
public:
    Inventaire();
    Inventaire(int);
    virtual ~Inventaire();
    Inventaire(const Inventaire&);
    Inventaire& operator=(const Inventaire&);

    void affiche();
    void init(int);
    void init(Item &);
    void Jeter(Item &);

protected:
    int m_nb;
    Item *m_tab;
};

#endif // INVENTAIRE_H
