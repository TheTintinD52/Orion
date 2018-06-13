#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "string"

class Personnage
{
public:
    Personnage();
    Personnage(int);
    Personnage(std::string, int);
    Personnage(std::string, int, int);
    virtual ~Personnage();
    Personnage(const Personnage&);
    Personnage& operator=(const Personnage&);

    void affiche();
    void recevoirDegats(int);

    int Getvie()
    {
        return m_vie;
    }
    void Setvie(int val)
    {
        m_vie = val;
    }
    std::string Getnom()
    {
        return m_nom;
    }
    void Setnom(std::string val)
    {
        m_nom = val;
    }
    int Getendurance()
    {
        return m_endurance;
    }
    void Setendurance(int val)
    {
        m_endurance = val;
    }
protected:
    std::string m_nom;
    int m_vie;
    int m_endurance;
};

#endif // PERSONNAGE_H
