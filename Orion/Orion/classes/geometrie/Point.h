#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point
{
protected:
	float m_x, m_y, m_r, m_t;
	void majpolaire();
	void majcart();
public:
	Point();
	Point(float);
	Point(float, float);
	Point(const Point &);
	virtual ~Point();
	Point& operator=(const Point &);
	Point& operator+=(const Point &);
	Point& operator-=(const Point &);
	Point& operator*=(const Point &);
	friend std::ostream& operator<<(std::ostream&, Point &);
 
	friend bool operator!=(Point&, Point&);
	friend bool operator==(Point&, Point&);

	void affiche() const;
	void deplace(float, float);
	void homothetie(float);
	void rotation(float);
	void initialise(float, float);

	float Getx() const;
	void Setx(float);
	float Gety() const;
	void Sety(float);
	float Getr() const;
	void Setr(float);
	float Gett() const;
	void Sett(float);
};

Point operator+(Point const &a, Point const &b);
Point operator-(Point const &a, Point const &b);
Point operator*(Point const &a, Point const &b);

#endif