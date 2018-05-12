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

void Sphere::afficher() const
{
	std::cout << *this<<'\n';
}

std::ostream& operator<<(std::ostream& os,const Sphere& s)
{
	os <<"Sphere : de rayon "<<s.getRayon();
	os <<", de centre "<<s.getCentre();
	os <<"de matériau ["<<s.getMateriau()<<']';
	return os;
}

std::istream& operator>>(std::istream& is,Sphere& s)
{
	is >> s.centre >> s.rayon;
	return is;
}
