#include <GLFW/glfw3.h>
#include <string>
#include <vector>
#include <Entite/Animal.h>
#include <objet/Arme.h>
#include <objet/Block.h>
#include <geometrie/Carre.h>
#include <geometrie/Coordonnees.h>
#include <Entite/Ennemi.h>
#include <autre/Inventaire.h>
#include <Entite/Joueur.h>
#include <objet/Objet.h>
#include <objet/Outil.h>
#include <objet/Outillage.h>
#include <Entite/Entite.h>
#include <Entite/PNJ.h>
#include <geometrie/Point.h>
#include <geometrie/Segment.h>

using namespace std;

int main()
{
	Point p1(2.0f, 3.0f), p2(1.3f, 2.7f), p3(4.0f), p4(0.0f);
	
	Segment d1(p1, p2), d2(p3, p4);
	
	Carre carre1(p1, p2);

	Coordonnees c1(1, 2, 3);
	Coordonnees c2(-3, 4, 3);

	Block b(1, "Pierre", 1.3, carre1);

	Objet i2(2, "Sucre");

	Inventaire i(20);

	Arme a1(3, "Epee", 25, 256);
	Arme a2(4, "Hache", 40, 1024);
	Arme a3(5, "Baton", 7, 10);

	Outil o1(6, "Pelle", 23);

	Joueur j("Paul", 150, 150, 150, i, a1, o1);

	Ennemi e1("Tafiole", 50, 50, a3);

	cout << endl;
	j.affiche();
	cout << endl << endl;
	e1.affiche();
	cout << endl << endl;

	j.changerArme(a2);
	j.affiche();
	cout << endl << endl;
	j.attaquer(e1);
	cout << "Vie de " << e1.Getnom() << " = " << e1.Getvie() << endl << endl;
	e1.boirePotionDeVie(20);
	cout << "Vie de " << e1.Getnom() << " = " << e1.Getvie() << endl << endl;
	j.prendreItem(i2);
	j.prendreItem(a1);
	j.afficheInventaire();

	//------------------------------------------------------------------------------------//

	int a = glfwInit();
	cout << a << endl;

	GLFWwindow* window = glfwCreateWindow(640, 420, "Orion", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		perror("Error can't create window !");
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	glfwTerminate();
}