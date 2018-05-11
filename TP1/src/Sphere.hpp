#ifndef SPHERE_HPP
#define SPHERE_HPP
#include <iostream>
#include "Objet.hpp"
#include "Point.hpp"
#include "Materiau.hpp"
class Sphere : public Objet
{
	private:
		Point centre;
		float rayon;
	public:
		Sphere();
		Sphere(Materiau materiau, Point centre, float rayon);
		Point getCentre() const;
		float getRayon() const;
		bool intersection() const;
		friend std::ostream& operator<<(std::ostream& os,const Sphere& s);
		friend std::istream& operator>>(std::istream& is,Sphere& s);
};



#endif
