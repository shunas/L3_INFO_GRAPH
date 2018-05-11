#ifndef OBJET_HPP
#define OBJET_HPP
#include <iostream>
#include "Materiau.hpp"

class Objet
{
	protected:
		Materiau materiau;
	public:
		Objet();
		Objet(Materiau materiau);
		Materiau getMateriau() const;
		virtual bool intersection() const = 0;
};

#endif
