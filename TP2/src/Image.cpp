#include "Image.hpp"

Image::Image():
hauteur(10),largeur(10)
{
	pixel = new Couleur[hauteur*largeur];
}

Image::Image(int largeur, int hauteur):
largeur(largeur),hauteur(hauteur)
{
	pixel = new Couleur[hauteur*largeur];
}


		Image::~Image()
		{
			delete []pixel;
		}

		int Image::getLargeur() const
		{
			return largeur;
		}
		int Image::getHauteur() const
		{
			return hauteur;
		}

		void Image::setPixel(int x, int y, Couleur c)
		{
			pixel[y*largeur+x] = c;
		}

		Couleur Image::getPixel(int x, int y) const
		{
			return pixel[y*largeur+x];
		}

bool Image::save(std::string nom)
{
	std::ofstream fichier(nom,std::ios::out);

	fichier <<	"P3"<<std::endl;
	fichier << largeur << " " << hauteur<<std::endl;
	fichier << "255"<<std::endl;
	for(int i=0;i<largeur*hauteur;i++)
	{
		fichier << pixel[i].r*255 << " " << pixel[i].g*255 << " "<< pixel[i].b*255<<std::endl;
	}

	return true;

}
