#ifndef OUTILLAGE_H
#define OUTILLAGE_H

#include "string"

class Outillage
{
public:
    Outillage();
    Outillage(int);
    Outillage(int, std::string);
    Outillage(int, std::string, int);
    virtual ~Outillage();
    Outillage(const Outillage&);
    Outillage& operator=(const Outillage&);

    void affiche();

    int Getid()
    {
        return m_id;
    }
    void Setid(int val)
    {
        m_id = val;
    }
    std::string Getnom()
    {
        return m_nom;
    }
    void Setnom(std::string val)
    {
        m_nom = val;
    }
    int Getdura()
    {
        return m_dura;
    }
    void Setdura(int val)
    {
        m_dura = val;
    }

protected:
    int m_id;
    std::string m_nom;
    int m_dura;
};

#endif // OUTILLAGE_H
