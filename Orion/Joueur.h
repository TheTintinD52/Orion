#ifndef JOUEUR_H
#define JOUEUR_H

#include "Personnage.h"
#include "Arme.h"
#include "Outil.h"


class Joueur : public Personnage
{
public:
    Joueur();
    Joueur(int);
    Joueur(std::string, int);
    Joueur(std::string, int, int);
    Joueur(std::string, int, int, int);
    Joueur(std::string, int, int, int, Arme&);
    Joueur(std::string, int, int, int, Arme&, Outil&);
    virtual ~Joueur();
    Joueur(const Joueur&);
    Joueur& operator=(const Joueur&);

    void affiche();
    void changerArme(Arme &);
    void changerOutil(Outil &);
    void attaquer(Personnage &);

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
    Outil *m_outil;
};

#endif // JOUEUR_H
