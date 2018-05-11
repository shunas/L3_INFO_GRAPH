#include "Objet.hpp"

Objet::Objet():
materiau(Materiau())
{}

Objet::Objet(Materiau materiau):
materiau(materiau)
{}

Materiau Objet::getMateriau() const
{return materiau;}

