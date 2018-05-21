// HARRAT Zohra  &  DENIS Jimmy

/*!
 * \file Camera.hpp
 * \brief camera de visualisation
 * \author harrat-zohra denis-jimmy
 */

#ifndef CAMERA_HPP
#define CAMERA_HPP
#include <iostream>
#include <fstream>
#include "Point.hpp"
#include "Scene.hpp"
#include "Image.hpp"
#include "Rayon.hpp"

/*!
 * \class Camera
 * \brief class représentant la caméra
 *
 * La caméra est le point de vue depuis lequel on visualise la scène
 */
class Camera
{
	private:
		Point position;	/*!<@brief Point représentant la position de la caméra */
		Point centre;	/*!<@brief Point vers lequel la caméra regarde*/
		float distance;	/*!<@brief distance entre la position et le point regarder */
	public:
		/*!
		 * \brief Constructeur
		 * \result position(0,0,2); centre(0,0,0); distance 2
		 * Constructeur par défaut
		 */
		Camera();

		/*!
		 * \brief accesseur Position
		 * \return Position de la caméra
		 * Retourne un objet Point qui est une copie de l'attribue position
		 */
		Point getPosition() const;
		Point getCentre() const;
		float getDistance() const;
		/*!
		 * \brief generation de l'Image vue par la Camera
		 * \param[in] sc : Scene que l'on doit générer
		 * \param[in,out] im : Image générer
		 *
		 * Génère la Scene passer en entrer dans l'Image passer en entrer \n
		 * la Scene n'est pas modifier par cette méthode \n
		 * l'Image seras modifier pour contenir la scène \n
		 */
		void genererImage(const Scene& sc, Image& im);	//genére une image bleu avec une diagonal blanc, lance des rayons (vecteur normalisé) vers les milieux de chaque pixel de l'image
};

#endif
