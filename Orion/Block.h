#ifndef BLOCK_H
#define BLOCK_H

#include "string"
#include "Emplacement.h"

class Block
{
public:
    Block();
    Block(int);
    Block(int, std::string);
    Block(int, std::string, double);
    Block(const Block&);
    virtual ~Block();

    Block& operator=(const Block &);

    void affiche();
    void deplacer(int, int, int);

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
    Emplacement Getemplct()
    {
        return *m_emplct;
    }

protected:
    int m_id;
    std::string m_nom;
    double m_velMinage;
    Emplacement *m_emplct;
};

#endif // BLOCK_H
