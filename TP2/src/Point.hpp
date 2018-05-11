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
		friend std::ostream& operator<<(std::ostream& os,const Point& p);
		friend std::istream& operator>>(std::istream& is,Point& p);
};



#endif
