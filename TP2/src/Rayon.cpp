// HARRAT Zohra  &  DENIS Jimmy


#include <iostream>
#include "Rayon.hpp"

Rayon::Rayon():
origine(Point(0.0f,0.0f,0.0f)),direction(Vecteur(0.0f,0.0f,0.0f))
{}

Rayon::Rayon(Point origine,Vecteur direction):
origine(origine),direction(direction)
{}

std::ostream& operator<<(std::ostream& os,const Rayon& r)
{
	os << r.origine <<" -> " <<r.direction;
	return os;
}
