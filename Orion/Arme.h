#ifndef ARME_H
#define ARME_H

#include "string"
#include "Outillage.h"

class Arme : public Outillage
{
public:
    Arme();
    Arme(int);
    Arme(int, std::string);
    Arme(int, std::string, int);
    Arme(int, std::string, int, int);
    virtual ~Arme();
    Arme(const Arme& other);
    Arme& operator=(const Arme& other);

    void affiche();

    int Getdegat()
    {
        return m_degat;
    }
    void Setdegat(int val)
    {
        m_degat = val;
    }

protected:
    int m_degat;
};

#endif // ARME_H
