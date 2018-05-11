#include "Intensite.hpp"

Intensite::Intensite():
ir(0),ig(0),ib(0)
{}

Intensite::Intensite(unsigned int ir, unsigned int ig, unsigned int ib):
ir(ir),ig(ig),ib(ib)
{}

std::ostream& operator<<(std::ostream& os,const Intensite& c)
{
	os <<"("<<c.ir<<","<<c.ig<<","<<c.ib<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Intensite& c)
{
	is >> c.ir >> c.ig >> c.ib;
	return is;
}
