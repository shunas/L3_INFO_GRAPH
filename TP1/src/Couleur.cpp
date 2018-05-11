#include "Couleur.hpp"

Couleur::Couleur():
r(0), g(0), b(0)
{}

/* std::clamp(num,min,max)
 * si num est inférieur à min, il retourne min
 * si num est supérieur à max, il retourne max
 * sinon il retourne num
 *
 * if(num < min)
 * 	return min;
 * if(num > max)
 * 	return max;
 * return num
 *
 * ici on s'en sert pour forcer les valeurs à être entre 0 et 1,
 * si on rentre une valeur invalide, la valeur seras soit 0, soit 1
 * */

Couleur::Couleur(float r, float g, float b)
{
	this->r = std::clamp(r,0.0f,1.0f);
	this->g = std::clamp(g,0.0f,1.0f);
	this->b = std::clamp(b,0.0f,1.0f);
}

void Couleur::setColor(float r, float g, float b)
{
	this->r = std::clamp(r,0.0f,1.0f);
	this->g = std::clamp(g,0.0f,1.0f);
	this->b = std::clamp(b,0.0f,1.0f);
}

std::ostream& operator<<(std::ostream& os,const Couleur& c)
{
	os <<"("<<c.r<<","<<c.g<<","<<c.b<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Couleur& c)
{
	is >> c.r >> c.g >> c.b;
	return is;
}
