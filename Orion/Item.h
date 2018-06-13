#ifndef ITEM_H
#define ITEM_H

#include "string"

class Item
{
public:
    Item();
    Item(int);
    Item(std::string);
    Item(int, std::string);
    Item(const Item&);
    virtual ~Item();

    Item& operator=(const Item &);
    bool operator==(const Item &);

    void affiche();
    void init();

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

protected:
    int m_id;
    std::string m_nom;
};

#endif // ITEM_H
