#ifndef BLOCK_H
#define BLOCK_H

#include "string"
#include "Coordonnees.h"

class Block
{
public:
    Block();
    Block(int);
    Block(int, std::string);
    Block(int, std::string, double);
    Block(int, std::string, double, Coordonnees &);
    Block(const Block&);
    virtual ~Block();

    Block& operator=(const Block &);

    void affiche();
    void deplacer(Coordonnees &);

    int Getid()
    {
        return m_id;
    }
    void Setid(int val)
    {
        m_id = val;
    }
    double GetvelMinage()
    {
        return m_velMinage;
    }
    void SetvelMinage(double val)
    {
        m_velMinage = val;
    }
    std::string Getnom()
    {
        return m_nom;
    }
    void Setnom(std::string val)
    {
        m_nom = val;
    }
    Coordonnees Getemplct()
    {
        return *m_position;
    }

protected:
    int m_id;
    std::string m_nom;
    double m_velMinage;
    Coordonnees *m_position;
};

#endif // BLOCK_H
