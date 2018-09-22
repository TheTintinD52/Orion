#ifndef DROITE_H
#define DROITE_H

#include <iostream>
#include <geometrie/Point.h>

class Segment
{
public:
	Segment();
	Segment(float, float);
	Segment(float, float, float, float);
	Segment(Point &, Point &);
	Segment(const Segment &);
	virtual ~Segment();

	Segment& operator=(const Segment &);
	friend bool operator==(Segment &, Segment &);
	friend bool operator!=(Segment &, Segment &);

	void affiche() const;
	void deplace(float, float, float, float);
	void deplace(Point &, Point &);

protected:
	Point *m_a;
	Point *m_b;
};

#endif