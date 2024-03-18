



#include "ASpell.hpp"

// canonical form ...
ASpell::ASpell() : name("default"), effects("default") {};

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {};

ASpell::ASpell(ASpell const & other)
{
	this->name = other.name;
	this->effects = other.effects;
}

ASpell & ASpell::operator=(ASpell const & other)
{
	this->name = other.name;
	this->effects = other.effects;
	return *this;
}

ASpell::~ASpell() {};

// getters ...

std::string const & ASpell::getName() const
{
	return this->name ;
}

std::string const & ASpell::getEffects() const
{
	return this->effects;
}


void ASpell::launch(ATarget const & atarget) const
{
	atarget.getHitBySpell(*this);
}






