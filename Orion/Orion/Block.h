#ifndef BLOCK_H
#define BLOCK_H

#include "iostream"
#include "string"
#include "Carre.h"
#include "Coordonnees.h"
#include "Objet.h"

class Block : public Objet
{
public:
	Block();
	Block(int);
	Block(int, std::string);
	Block(int, std::string, float);
	Block(int, std::string, float, Carre&);
	Block(int, std::string, float, Carre&, Coordonnees&);
	virtual ~Block();
	Block(const Block&);

	Block& operator=(const Block&);

	void affiche() const;
	void deplacer(Coordonnees&);

	float GetvelMinage() const;
	void SetvelMinage(float val);

protected:
	float m_velMinage;
	Carre *m_face1, *m_face2, *m_face3, *m_face4, *m_face5, *m_face6;
	Coordonnees *m_position;
};

#endif