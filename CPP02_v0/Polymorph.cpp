#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "brunt to a crisp") {}
Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
	return new Polymorph();
}
