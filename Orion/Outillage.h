#ifndef OUTILLAGE_H
#define OUTILLAGE_H

#include "string"
#include "Item.h"

class Outillage : public Item
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

    int Getdura()
    {
        return m_dura;
    }
    void Setdura(int val)
    {
        m_dura = val;
    }

protected:
    int m_dura;
};

#endif // OUTILLAGE_H
