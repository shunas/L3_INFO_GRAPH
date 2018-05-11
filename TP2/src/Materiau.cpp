#include "Materiau.hpp"

Materiau::Materiau():
couleur(Couleur(0.8,0.8,0.8)),kd(0.5),ks(0.1),s(10)
{}

Materiau::Materiau(Couleur& couleur, float kd, float ks, int s)
{
	this->couleur = couleur;
	this->kd = std::clamp(kd,0.0f,1.0f);
	this->ks = std::clamp(ks,0.0f,1.0f);
	this->s = std::clamp(s,1,INT_MAX);
}

void Materiau::setAttibut(Couleur& couleur, float kd, float ks, int s)
{
	this->couleur = couleur;
	this->kd = std::clamp(kd,0.0f,1.0f);
	this->ks = std::clamp(ks,0.0f,1.0f);
	this->s = std::clamp(s,1,INT_MAX);
}

Couleur Materiau::getCouleur() const
{return couleur;}

float Materiau::getkd() const
{return kd;}

float Materiau::getks() const
{return ks;}

int Materiau::gets() const
{return s;}

std::ostream& operator<<(std::ostream& os,const Materiau& m)
{
	os <<"("<<m.getCouleur()<<","<<m.getkd()<<","<<m.getks()<<","<<m.gets()<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Materiau& m)
{
	is >> m.couleur >> m.kd >> m.ks >> m.s;
	return is;
}
