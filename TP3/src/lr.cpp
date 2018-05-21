// HARRAT Zohra  &  DENIS Jimmy

/*!
 * \file lr.cpp
 * \brief calculateur d'image 3D
 * \author harrat-zohra denis-jimmy
 *
 * Programme qui permet de générer l'image d'une scène.
 */


 /*!
  * \mainpage Lancer de rayons
  *
  * \section intro_sec Introduction
  * Programme qui permet de générer l'image d'une scène 3D contenant des objets.
  *
  * \section install_sec Utilisation
  * \subsection step1 Construire le projet:
  * mkdir build && cd build \n
  * cmake .. \n
  * make \n
  *
  * \subsection step2 Creer la scene:
  * Créer un fichier scene.txt dans le dossier build, c'est dans ce fichier que vous allez écrire votre scène. \n
  * voici la syntaxe : \n
  * \# commentaire de la ligne \n
  * sphere xc yc zc r \n
  * plan a b c d \n
  * source x y z r g b \n
  * matériau r g b kd ks s \n
  * fond r g b \n
  *
  * \subsection step3 Lancer le programme
  * ./main.out \n
  * Le programme va automatiquement importer votre scene.txt et générer une image. \n
  * Le résultat se trouve dans le dossier buil sous le nom scene.ppm \n
  */

#include <iostream>
#include "Image.hpp"
#include "Camera.hpp"
#include "Scene.hpp"

int main()
{
	//creation de la caméra
	Camera c;
	//création de la scène
	Scene s;
	//création d'une image de 256*256
	Image i(256,256);
	Couleur *vert=new Couleur(0.0,0.0,0.0);
	/* génère l'image fond bleu avec diago blanche et lance des rayons à chaque pixels*/
	s.setFond(vert);
	s.charger("scene.txt");
	s.afficher();
	c.genererImage(s,i);
	/* écriture du fichier PPM */
	i.save("scene.ppm");
	return 0;
}
