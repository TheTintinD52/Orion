#ifndef COORDONNEES_H
#define COORDONNEES_H


class Coordonnees
{
public:
    Coordonnees();
    Coordonnees(int);
    Coordonnees(int, int);
    Coordonnees(int, int, int);
    virtual ~Coordonnees();
    Coordonnees(const Coordonnees& other);
    Coordonnees& operator=(const Coordonnees& other);

    void affiche();

    int Getx()
    {
        return m_x;
    }
    void Setx(int val)
    {
        m_x = val;
    }
    int Gety()
    {
        return m_y;
    }
    void Sety(int val)
    {
        m_y = val;
    }
    int Getz()
    {
        return m_z;
    }
    void Setz(int val)
    {
        m_z = val;
    }

protected:
    int m_x;
    int m_y;
    int m_z;
};

#endif // COORDONNEES_H
