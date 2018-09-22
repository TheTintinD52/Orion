#ifndef PNJ_H
#define PNJ_H

#include <iostream>
#include <Entite/Entite.h>

class PNJ : public Entite
{
public:
	PNJ();
	virtual ~PNJ();
	PNJ(const PNJ&);
	PNJ& operator=(const PNJ&);

	void affiche() const;
};

#endif