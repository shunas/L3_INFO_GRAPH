// HARRAT Zohra  &  DENIS Jimmy


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
		Point position;	//position de la caméra
		Point centre;	//point vers lequel la caméra regarde
		float distance;	//distance entre la position et le point regarder
	public:
		Camera();	//constructeur par defaut, position (0,0,2), regarde vers l'origine O
		Point getPosition() const;
		Point getCentre() const;
		float getDistance() const;
		void genererImage(const Scene& sc, Image& im);	//genére une image bleu avec une diagonal blanc, lance des rayons (vecteur normalisé) vers les milieux de chaque pixel de l'image
};

#endif
