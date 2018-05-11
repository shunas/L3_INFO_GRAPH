#include "Sphere.hpp"

Sphere::Sphere():
Objet(),centre(Point()),rayon(1)
{}

Sphere::Sphere(Materiau materiau, Point centre, float rayon):
Objet(materiau),centre(centre),rayon(rayon)
{}

bool Sphere::intersection() const
{
	return false;
}

Point Sphere::getCentre() const
{return centre;}

float Sphere::getRayon() const
{return rayon;}

std::ostream& operator<<(std::ostream& os,const Sphere& s)
{
	os <<"Sphere : "<<s.getMateriau()<<","<<s.getCentre()<<","<<s.getRayon()<<".";
	return os;
}

std::istream& operator>>(std::istream& is,Sphere& s)
{
	is >> s.centre >> s.rayon;
	return is;
}
