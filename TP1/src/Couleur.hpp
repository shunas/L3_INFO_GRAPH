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
		friend std::istream& operator>>(std::istream& is,Couleur& c);
		friend std::ostream& operator<<(std::ostream& os,const Couleur& c);
};




#endif
