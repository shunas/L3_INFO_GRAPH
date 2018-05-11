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

std::ostream& operator<<(std::ostream& os,const Plan& p)
{
	os <<"Plan : ("<<p.getA()<<","<<p.getB()<<","<<p.getC()<<","<<p.getD()<<")";
	return os;
}

std::istream& operator>>(std::istream & is, Plan& p)
{
	is >> p.materiau >> p.a >> p.b >> p.c >> p.d;
	return is;
}
