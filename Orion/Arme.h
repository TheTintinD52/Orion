#ifndef ARME_H
#define ARME_H

#include "string"

class Arme
{
public:
    Arme();
    Arme(std::string);
    Arme(std::string, int);
    Arme(std::string, int, int);
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
    int Getdurabilite()
    {
        return m_durabilite;
    }
    void Setdurabilite(int val)
    {
        m_durabilite = val;
    }
    std::string Getnom()
    {
        return m_nom;
    }
    void Setnom(std::string val)
    {
        m_nom = val;
    }

protected:
    std::string m_nom;
    int m_degat;
    int m_durabilite;
};

#endif // ARME_H
