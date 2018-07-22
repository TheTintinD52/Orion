#include "Etabli.h"
#include "string"

using namespace std;

Etabli::Etabli() : Block()
{

}

Etabli::Etabli(int id) : Block(id)
{

}

Etabli::Etabli(int id, string nom) : Block(id, nom)
{

}

Etabli::Etabli(int id, string nom, double velMinage) : Block(id, nom, velMinage)
{

}

Etabli::Etabli(int id, string nom, double velMinage, Carre &carre) : Block(id, nom, velMinage, carre)
{

}

Etabli::Etabli(int id, string nom, double velMinage, Carre &carre, Coordonnees &coordonnees) : Block(id, nom, velMinage, carre, coordonnees)
{

}

Etabli::~Etabli()
{

}

Etabli::Etabli(const Etabli& other) : Block(other)
{

}

Etabli& Etabli::operator=(const Etabli& other)
{
	if (this != &other)
	{
		Block *mg;
		const Block *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
	}
	return *this;
}

void Etabli::affiche() const
{
	Block::affiche();
}