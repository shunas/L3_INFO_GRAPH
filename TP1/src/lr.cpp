#include <iostream>
#include "Point.hpp"
#include "Vecteur.hpp"
#include "Couleur.hpp"
#include "Materiau.hpp"
#include "Intensite.hpp"
#include "Sphere.hpp"
#include "Plan.hpp"
#include "Source.hpp"
#include "Scene.hpp"

int main()
{
	Point p(2,4,6);
	std::cout<<p<<'\n';
	Vecteur v(1,3,5);
	std::cout<<v<<'\n';
	Couleur c1(0.5,0.6,0.7);
	std::cout<<c1<<'\n';
	Materiau m(c1,0.4,0.8,50);
	Intensite i(10,20,40);
	std::cout<<m<<"\n"<<i<<'\n';
	Sphere s(m,p,2.5);
	std::cout<<s<<"\n";
	Plan pl(m,1,4,3.5,8);
	std::cout<<pl<<'\n';
	Source src(p,i);
	std::cout<<src<<'\n';
	Scene scene;
	scene.ajouterObjet(new Sphere(m,p,2.5));
	scene.setFond(new Couleur(0.5,0.5,0.5));
	return 0;
}
