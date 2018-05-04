#include "Vecteur.hpp"

Vecteur::Vecteur():
dx(0),dy(0),dz(0)
{}

Vecteur::Vecteur(int dx,int dy,int dz):
dx(dx),dy(dy),dz(dz)
{}

std::ostream& operator<<(std::ostream& os,const Vecteur& v)
{
	os <<"("<<v.dx<<","<<v.dy<<","<<v.dz<<")\n";
	return os;
}
