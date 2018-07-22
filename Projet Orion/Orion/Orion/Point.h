#ifndef POINT_H
#define POINT_H

#include "iostream"

class Point
{
protected:
	double m_x, m_y, m_r, m_t;
	void majpolaire();
	void majcart();
public:
	Point();
	Point(double);
	Point(double, double);
	Point(const Point &);
	virtual ~Point();
	void affiche() const;
	void deplace(double, double);
	void homothetie(double);
	void rotation(double);
	void initialise(double, double);
	Point& operator=(const Point &);
	Point& operator+=(const Point &);
	Point& operator-=(const Point &);
	Point& operator*=(const Point &);
	friend std::ostream& operator<<(std::ostream&, Point &);

	double Getx() const;
	void Setx(double);
	double Gety() const;
	void Sety(double);
	double Getr() const;
	void Setr(double);
	double Gett() const;
	void Sett(double);
};

Point operator+(Point const &a, Point const &b);
Point operator-(Point const &a, Point const &b);
Point operator*(Point const &a, Point const &b);

#endif