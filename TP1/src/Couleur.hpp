#ifndef COULEUR_HPP
#define COULEUR_HPP
#include <iostream>
#include <algorithm>
class Couleur
{
	public:
		float r;
		float g;
		float b;

		Couleur();
		Couleur(const float r, const float g, const float b);
		void setColor(float r, float g, float b);
};

std::ostream& operator<<(std::ostream& os,const Couleur& c);

#endif
