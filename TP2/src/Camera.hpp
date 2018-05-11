#ifndef CAMERA_HPP
#define CAMERA_HPP
#include <iostream>
#include <fstream>
#include "Point.hpp"
#include "Scene.hpp"
#include "Image.hpp"
#include "Rayon.hpp"
class Camera
{
	private:
		Point position;
		Point centre;
		float distance;
	public:
		Camera();
		Point getPosition() const;
		Point getCentre() const;
		float getDistance() const;
		void genererImage(const Scene& sc, Image& im);
		//friend std::ostream operator<<(std::ostream os,const Camera& c);
		//friend std::istream operator>>(std::istream is,Camera& c);
};

#endif
