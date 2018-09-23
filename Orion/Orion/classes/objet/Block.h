#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <string>
#include <geometrie\Carre.h>
//#include <geometrie\Point.h>
#include <objet\Objet.h>

class Block : public Objet
{
public:
	Block();
	Block(int);
	Block(int, std::string);
	Block(int, std::string, float);
	Block(int, std::string, float, Carre&);
	virtual ~Block();
	Block(const Block&);

	Block& operator=(const Block&);

	void affiche() const;
	//void deplacer(Coordonnees&);

	float GetvelMinage() const;
	void SetvelMinage(float val);

protected:
	float m_velMinage;
	Carre *m_face1, *m_face2, *m_face3, *m_face4, *m_face5, *m_face6;
	// position ?
};

#endif