#include "Plan.hpp"

Plan::Plan():
Objet(),a(0),b(1),c(0),d(0)
{}

Plan::Plan(Materiau m,float a, float b, float c, float d):
Objet(m),a(a),b(b),c(c),d(d)
{}

float Plan::getA() const
{return a;}

float Plan::getB() const
{return b;}

float Plan::getC() const
{return c;}

float Plan::getD() const
{return d;}

bool Plan::intersection() const
{return false;}

void Plan::afficher() const
{
	std::cout<<*this<<'\n';
}

std::ostream& operator<<(std::ostream& os,const Plan& p)
{
	os <<"Plan : d'équation " <<p.getA()<<"x + "<<p.getB()<<"y + "<<p.getC()<<"z + "<<p.getD()<<" = 0 ";
	os <<"de matériau ["<<p.getMateriau()<<"]";
	return os;
}

std::istream& operator>>(std::istream & is, Plan& p)
{
	is >> p.materiau >> p.a >> p.b >> p.c >> p.d;
	return is;
}
