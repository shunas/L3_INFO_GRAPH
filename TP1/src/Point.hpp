#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point
{
	public:
		float x;
		float y;
		float z;

		Point();
		Point(int x,int y,int z);
};

std::ostream& operator<<(std::ostream& os,const Point& p);

#endif
