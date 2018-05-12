#ifndef SOURCE_HPP
#define SOURCE_HPP
#include <iostream>
#include "Point.hpp"
#include "Intensite.hpp"
class Source
{
	private:
		Point position;
		Intensite intensite;
	public:
		Source();
		Source(Point position, Intensite intensite);
		Point getPosition() const;
		Intensite getIntensite() const;
		void afficher() const;
		friend std::ostream& operator<<(std::ostream& os,const Source& src);
		friend std::istream& operator>>(std::istream& is,Source& src);

};



#endif
