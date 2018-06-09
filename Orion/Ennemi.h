#ifndef ENNEMI_H
#define ENNEMI_H

#include "Personnage.h"
#include "string"
#include "Arme.h"


class Ennemi : public Personnage
{
    public:
        Ennemi();
        Ennemi(std::string);
        Ennemi(std::string, int);
        Ennemi(std::string, int, int);
        Ennemi(std::string, int, int, int);
        Ennemi(std::string, int, int, int, std::string);
        Ennemi(std::string, int, int, int, std::string, int);
        Ennemi(std::string, int, int, int, std::string, int, int);
        virtual ~Ennemi();
        Ennemi(const Ennemi& other);
        Ennemi& operator=(const Ennemi& other);

        void affiche();

    protected:
        Arme *m_arme;
};

#endif // ENNEMI_H
