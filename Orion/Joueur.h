#ifndef JOUEUR_H
#define JOUEUR_H

#include "Personnage.h"
#include "Arme.h"


class Joueur : public Personnage
{
public:
    Joueur();
    Joueur(std::string);
    Joueur(std::string, std::string);
    Joueur(std::string, std::string, int);
    Joueur(std::string, std::string, int, int);
    virtual ~Joueur();
    Joueur(const Joueur&);
    Joueur& operator=(const Joueur&);

    void affiche();
    void changerArme(Arme &);

    int Getfaim()
    {
        return m_faim;
    }
    void Setfaim(int val)
    {
        m_faim = val;
    }

protected:
    int m_faim;
    Arme *m_arme;
};

#endif // JOUEUR_H
