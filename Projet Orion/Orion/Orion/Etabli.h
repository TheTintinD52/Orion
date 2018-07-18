#pragma once
#include "Block.h"
#include "string"

class Etabli : public Block
{
public:
	Etabli();
	Etabli(int);
	Etabli(int, std::string);
	Etabli(int, std::string, double);
	Etabli(int, std::string, double, Coordonnees&);
	virtual ~Etabli();
	Etabli(const Etabli&);
	Etabli& operator=(const Etabli&);

protected:
};