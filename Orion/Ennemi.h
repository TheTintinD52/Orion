#ifndef ENNEMI_H
#define ENNEMI_H

#include "Personnage.h"
#include "string"
#include "Arme.h"


class Ennemi : public Personnage
{
    public:
        Ennemi();
        Ennemi(int);
        Ennemi(std::string, int);
        Ennemi(std::string, int, int);
        Ennemi(std::string, int, int, Arme&);
        virtual ~Ennemi();
        Ennemi(const Ennemi& other);
        Ennemi& operator=(const Ennemi& other);

        void affiche();
        void boirePotionDeVie(int);

    protected:
        Arme *m_arme;
};

#endif // ENNEMI_H
