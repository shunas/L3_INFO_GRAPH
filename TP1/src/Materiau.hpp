#ifndef MATERIAU_HPP
#define MATERIAU_HPP
#include <iostream>
#include <algorithm>
#include <climits>
#include "Couleur.hpp"

class Materiau
{
	private:
		Couleur couleur;
		float kd;
		float ks;
		int s;
	public:
		Materiau();
		Materiau(Couleur couleur, float kd, float ks, int s);
		void setAttibut(Couleur couleur, float kd, float ks, int s);
		Couleur getCouleur() const;
		float getkd() const;
		float getks() const;
		int gets() const;
		friend std::ostream& operator<<(std::ostream& os,const Materiau& m);
		friend std::istream& operator>>(std::istream& is,Materiau& );
};



#endif
