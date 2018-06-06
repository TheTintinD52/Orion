#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H

#include "Coordonnees.h"

class Emplacement
{
public:
    Emplacement();
    Emplacement(int);
    Emplacement(int, int);
    Emplacement(int, int, int);
    virtual ~Emplacement();
    Emplacement(const Emplacement&);
    Emplacement& operator=(const Emplacement&);

    void affiche();

    Coordonnees GetCoor()
    {
        return *m_Coor;
    }
    void SetCoor(Coordonnees val)
    {
        *m_Coor = val;
    }

protected:
    Coordonnees *m_Coor;
};

#endif // EMPLACEMENT_H
