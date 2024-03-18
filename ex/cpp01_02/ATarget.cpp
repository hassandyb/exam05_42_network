

#include "ATarget.hpp"


ATarget::ATarget() : type("default_type") {};

ATarget::ATarget(std::string type) : type(type) {};



ATarget::ATarget(ATarget const & other) 
{
	this->type = other.getType();
};

ATarget & ATarget::operator=(ATarget const & other) 
{
	this->type = other.getType();
	return *this;
 };

ATarget::~ATarget() {};


// getters ....
std::string const & ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(ASpell const & aspell) const
{
	std::cout << this->type << " has been " << aspell.getEffects() << "!" << std::endl;
}


