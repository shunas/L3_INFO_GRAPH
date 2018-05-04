#ifndef VECTEUR_HPP
#define VECTEUR_HPP
#include <iostream>

class Vecteur
{
	public:
		float dx;
		float dy;
		float dz;

		Vecteur();
		Vecteur(int dx,int dy,int dz);
};

std::ostream& operator<<(std::ostream& os,const Vecteur& v);

#endif
