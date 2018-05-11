#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include "Couleur.hpp"
class Image
{
	private:
		Couleur *pixel;
		int largeur, hauteur;
	public:
		Image();
		Image(int largeur,int hauteur);
		~Image();

		int getLargeur() const;
		int getHauteur() const;

		void setPixel(int x, int y, Couleur c);
		Couleur getPixel(int x, int y) const;

		bool save(std::string nom);
};

#endif
