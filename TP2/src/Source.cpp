#include "Source.hpp"

Source::Source():
position(Point()),intensite(Intensite(100,100,100))
{}

Source::Source(Point position,Intensite intensite):
position(position),intensite(intensite)
{}

Point Source::getPosition() const
{return position;}

Intensite Source::getIntensite() const
{return intensite;}

std::ostream& operator<<(std::ostream& os,const Source& src)
{
	os <<"Source : "<<src.getPosition()<<","<<src.getIntensite()<<".";
	return os;
}

std::istream& operator>>(std::istream& is,Source& src)
{
	is >> src.position >> src.intensite;
	return is;
}
