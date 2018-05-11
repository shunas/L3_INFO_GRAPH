#ifndef SCENE_HPP
#define SCENE_HPP
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <typeinfo>
#include "Objet.hpp"
#include "Source.hpp"
#include "Couleur.hpp"
#include "Materiau.hpp"
#include "Intensite.hpp"
#include "Plan.hpp"
#include "Sphere.hpp"
class Scene
{
	private:
		std::vector <Objet*> objets;
		std::vector <Source*> sources;
		Couleur * fond;
	public:
		Scene();
		~Scene();
		void setFond(Couleur * f);
		void ajouterObjet(Objet * obj);
		void ajouterSource(Source * src);
		bool intersection() const;
		void charger(std::string nom);
		void afficher() const;
};

#endif
