#pragma once
#include "iostream"

class Point
{
protected:
	double m_x, m_y;
	double m_r, m_t;
	void majpolaire();
	void majcart();
public:
	Point();
	Point(double);
	Point(double, double);
	Point(const Point &);
	virtual ~Point();
	void affiche();
	void deplace(double, double);
	void homothetie(double);
	void rotation(double);
	void initialise(double, double);
	Point& operator=(const Point &);
	Point& operator+=(const Point &);
	Point& operator-=(const Point &);
	Point& operator*=(const Point &);
	friend std::ostream& operator<<(std::ostream&, Point &);

	double Getx()
	{
		return m_x;
	}
	void Setx(double var)
	{
		m_x = var;
	}
	double Gety()
	{
		return m_y;
	}
	void Sety(double var)
	{
		m_y = var;
	}
};

Point operator+(Point const &a, Point const &b);
Point operator-(Point const &a, Point const &b);
Point operator*(Point const &a, Point const &b);