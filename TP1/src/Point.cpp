#include "Point.hpp"

Point::Point():
x(0),y(0),z(0)
{}

Point::Point(int x,int y,int z):
x(x),y(y),z(z)
{}

std::ostream& operator<<(std::ostream& os,const Point& p)
{
	os <<"("<<p.x<<","<<p.y<<","<<p.z<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Point& p)
{
	is >> p.x >> p.y >> p.z;
	return is;
}
