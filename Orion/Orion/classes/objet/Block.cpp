#include <objet\Block.h>

using namespace std;

Block::Block() : Objet(0, "Default"), m_velMinage(0), m_face1(NULL), m_face2(NULL), m_face3(NULL), m_face4(NULL), m_face5(NULL), m_face6(NULL)
{

}

Block::Block(int id) : Objet(id, "Default"), m_velMinage(0), m_face1(NULL), m_face2(NULL), m_face3(NULL), m_face4(NULL), m_face5(NULL), m_face6(NULL)
{

}

Block::Block(int id, string nom) : Objet(id, nom), m_velMinage(0), m_face1(NULL), m_face2(NULL), m_face3(NULL), m_face4(NULL), m_face5(NULL), m_face6(NULL)
{

}

Block::Block(int id, string nom, float velMinage) : Objet(id, nom), m_velMinage(velMinage), m_face1(NULL), m_face2(NULL), m_face3(NULL), m_face4(NULL), m_face5(NULL), m_face6(NULL)
{

}

Block::Block(int id, string nom, float velMinage, Carre &carre) : Objet(id, nom), m_velMinage(velMinage)
{
	m_face1 = new Carre(carre);
	m_face2 = new Carre(carre);
	m_face3 = new Carre(carre);
	m_face4 = new Carre(carre);
	m_face5 = new Carre(carre);
	m_face6 = new Carre(carre);
}

Block::~Block()
{
	delete(m_face1);
	delete(m_face2);
	delete(m_face3);
	delete(m_face4);
	delete(m_face5);
	delete(m_face6);
}

Block::Block(const Block &other)
{
	m_velMinage = other.m_velMinage;
	m_face1 = new Carre(*(other.m_face1));
	m_face2 = new Carre(*(other.m_face2));
	m_face3 = new Carre(*(other.m_face3));
	m_face4 = new Carre(*(other.m_face4));
	m_face5 = new Carre(*(other.m_face5));
	m_face6 = new Carre(*(other.m_face6));
}

// operators overloading

Block& Block::operator=(const Block &other)
{
	if (this != &other)
	{
		Objet *mg;
		const Objet *md;
		mg = this;
		md = &other;
		(*mg) = (*md);
		delete(m_face1);
		delete(m_face2);
		delete(m_face3);
		delete(m_face4);
		delete(m_face5);
		delete(m_face6);
		m_velMinage = other.m_velMinage;
		m_face1 = new Carre(*(other.m_face1));
		m_face2 = new Carre(*(other.m_face2));
		m_face3 = new Carre(*(other.m_face3));
		m_face4 = new Carre(*(other.m_face4));
		m_face5 = new Carre(*(other.m_face5));
		m_face6 = new Carre(*(other.m_face6));
	}
	return *this;
}

// methodes

void Block::affiche() const
{
	Objet::affiche();
	cout << "Vitesse de minage : " << m_velMinage << endl;
	if (m_face1 != NULL)
	{
		m_face1->affiche();
	}
}

/*void Block::deplacer(Coordonnees &coordonnees)
{
	delete(m_position);
	m_position = new Coordonnees(coordonnees);
}*/

// accesseurs

float Block::GetvelMinage() const
{
	return m_velMinage;
}

void Block::SetvelMinage(float val)
{
	m_velMinage = val;
}
