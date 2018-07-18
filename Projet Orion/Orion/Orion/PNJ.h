#pragma once
#include "Personnage.h"

class PNJ : public Personnage
{
public:
	PNJ();
	virtual ~PNJ();
	PNJ(const PNJ&);
	PNJ& operator=(const PNJ&);

	void affiche();

protected:
};

