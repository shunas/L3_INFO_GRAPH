#include <iostream>
#include "Point.hpp"
#include "Vecteur.hpp"
#include "Couleur.hpp"
int main()
{
	Point p(2,4,6);
	std::cout<<p;
	Vecteur v(1,3,5);
	std::cout<<v;
	Couleur c1;
	Couleur c2(0.5,0.6,0.7);
	Couleur c3(0.5,-0.6,1.7);
	std::cout<<c1;
	std::cout<<c2;
	std::cout<<c3;
	c3.setColor(0.7,2.0,-1000.0);
	std::cout<<c3;
	return 0;
}
