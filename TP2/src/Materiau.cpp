// HARRAT Zohra  &  DENIS Jimmy


#include "Materiau.hpp"

//constructeur par défaut, (0.8,0.8,0.8), 0.5, 0.1, 10
Materiau::Materiau():
couleur(Couleur(0.8,0.8,0.8)),kd(0.5),ks(0.1),s(10)
{}

//constructeur paramètre
Materiau::Materiau(Couleur couleur, float kd, float ks, int s)
{
	/* clamp permet de définir en valeur minimal et un valeur maximal, afin d'obtenir un interval */
	this->couleur = couleur;
	this->kd = std::clamp(kd,0.0f,1.0f);
	this->ks = std::clamp(ks,0.0f,1.0f);
	this->s = std::clamp(s,1,INT_MAX); //INT_MAX, constante définit par c++, valeur maximal pris par le int
}

//setter,permet de prendre en compte la plage des valeurs
void Materiau::setAttibut(Couleur couleur, float kd, float ks, int s)
{
	/* clamp permet de définir en valeur minimal et un valeur maximal, afin d'obtenir un interval */
	this->couleur = couleur;
	this->kd = std::clamp(kd,0.0f,1.0f);
	this->ks = std::clamp(ks,0.0f,1.0f);
	this->s = std::clamp(s,1,INT_MAX); //INT_MAX, constante définit par c++, valeur maximal pris par le int
}
//obtention des coefficiant de diffusion, spéculaire , et de la brillance
Couleur Materiau::getCouleur() const
{return couleur;}

float Materiau::getkd() const
{return kd;}

float Materiau::getks() const
{return ks;}

int Materiau::gets() const
{return s;}

//opérateur de sortie
std::ostream& operator<<(std::ostream& os,const Materiau& m)
{
	os <<m.getCouleur()<<","<<m.getkd()<<","<<m.getks()<<","<<m.gets();
	return os;
}

//opérateur d'entrée
std::istream& operator>>(std::istream& is,Materiau& m)
{
	float kd,ks;
	int s;
	Couleur c;
	is >> c >> kd >> ks >> s;
	m.setAttibut(c,kd,ks,s);
	return is;
}
