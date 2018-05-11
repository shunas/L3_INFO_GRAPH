#ifndef RAYON_HPP
#define RAYON_HPP
#include <iostream>
#include "Point.hpp"
#include "Vecteur.hpp"

class Rayon
{
	public:
		Point origine;
		Vecteur direction;

		Rayon();
		Rayon(Point origine,Vecteur direction);



};

#endif
