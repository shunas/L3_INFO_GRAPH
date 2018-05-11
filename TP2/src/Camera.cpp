#include "Camera.hpp"

Camera::Camera():
position(Point(0,0,2)),centre(Point(0,0,0)),distance(2)
{}

Point Camera::getPosition() const
{return position;}

Point Camera::getCentre() const
{return centre;}

float Camera::getDistance() const
{return distance;}


void Camera::genererImage(const Scene& sc, Image& im)
{
	Couleur bleu(0.0,0.0,1.0);
	Couleur blanc(1.0,1.0,1.0);
	Point p(0,0,2);
	float largeur = 2/im.getLargeur();
	float hauteur = 2/im.getHauteur();
	for(int i=0;i<im.getLargeur();i++)
	{
		for(int j=0;j<im.getHauteur();j++)
		{
			float milieuX = largeur * i + largeur/2;
			float milieuY = hauteur * j + hauteur/2;

			Rayon()
		}
	}
}

/*

friend std::ostream operator<<(std::ostream os,const Camera& c)
{
	os <<c.position <<","<<c.centre <<","<< c.distance;
	return os;
}
friend std::istream operator>>(std::istream is,Camera& c)
{
	is >> c.postion >> c.centre >> c.distance;
}*/
