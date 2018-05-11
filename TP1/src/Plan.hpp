#ifndef PLAN_HPP
#define PLAN_HPP
#include <iostream>
#include "Objet.hpp"
#include "Materiau.hpp"
class Plan:public Objet
{
	private:
		float a;
		float b;
		float c;
		float d;
	public:
		Plan();
		Plan(Materiau m,float a, float b, float c, float d);
		float getA() const;
		float getB() const;
		float getC() const;
		float getD() const;
		bool intersection() const;
		friend std::ostream& operator<<(std::ostream& os,const Plan& p);
		friend std::istream& operator>>(std::istream& is,Plan& p);
};



#endif
