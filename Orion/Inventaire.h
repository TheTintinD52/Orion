#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "Case.h"

class Inventaire
{
public:
    Inventaire();
    virtual ~Inventaire();
    Inventaire(const Inventaire&);
    Inventaire& operator=(const Inventaire&);

    void affiche();

    int Getnbl()
    {
        return m_nbl;
    }
    void Setnbl(int nbl)
    {
        m_nbl = nbl;
    }
    int Getnbc()
    {
        return m_nbc;
    }
    void Setnbc(int nbc)
    {
        m_nbc = nbc;
    }

protected:
    int m_nbl;
    int m_nbc;
    Case m_tab[20];
};

#endif // INVENTAIRE_H
