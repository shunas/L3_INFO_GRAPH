#ifndef INTENSITE_HPP
#define INTENSITE_HPP
#include <iostream>

class Intensite
{
	public:
		unsigned int ir;
		unsigned int ig;
		unsigned int ib;

		Intensite();
		Intensite(unsigned int ir, unsigned int ig, unsigned int ib);
		friend std::ostream& operator<<(std::ostream& os,const Intensite& c);
		friend std::istream& operator>>(std::istream& is,Intensite& c);
};



#endif
