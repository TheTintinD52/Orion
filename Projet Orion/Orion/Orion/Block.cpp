#include "string"
#include "iostream"
#include "Block.h"

using namespace std;

Block::Block() : Objet(), m_velMinage(0), m_position(NULL)
{

}

Block::Block(int id) : Objet(id), m_velMinage(0), m_position(NULL)
{

}

Block::Block(int id, string nom) : Objet(id, nom), m_velMinage(0), m_position(NULL)
{

}

Block::Block(int id, string nom, double velMinage) : Objet(id, nom), m_velMinage(velMinage), m_position(NULL)
{

}

Block::Block(int id, string nom, double velMinage, Coordonnees &c) : Objet(id, nom), m_velMinage(velMinage)
{
	m_position = new Coordonnees(c);
}

Block::~Block()
{
	delete(m_position);
}

Block::Block(const Block &other)
{
	m_velMinage = other.m_velMinage;
	m_position = new Coordonnees(*(other.m_position));
}

Block& Block::operator=(const Block &other)
{
	if (this != &other)
	{
		Objet *mg;
		const Objet *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		delete(m_position);
		m_velMinage = other.m_velMinage;
		m_position = new Coordonnees(*(other.m_position));
	}
	return *this;
}

void Block::affiche()
{
	Objet::affiche();
	cout << "Vitesse de minage : " << m_velMinage << endl;
	if (m_position != NULL)
	{
		m_position->affiche();
	}
}

void Block::deplacer(Coordonnees &e)
{
	delete(m_position);
	m_position = new Coordonnees(e);
}

