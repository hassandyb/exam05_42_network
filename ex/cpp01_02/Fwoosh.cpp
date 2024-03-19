
#include "Fwoosh.hpp"


// canonical form : ----------------

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {};

Fwoosh::~Fwoosh() {};

// the rest : ---------------------

ASpell *Fwoosh::clone() const
{
	ASpell *ptr = new Fwoosh();

	return ptr;
}


