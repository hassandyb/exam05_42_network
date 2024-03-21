



#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {};

TargetGenerator::TargetGenerator(TargetGenerator const & other) { *this = other;};

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & other)
{
	this->Data = other.Data;
	return *this;
};

TargetGenerator::~TargetGenerator() {};


// -----------------------------------------


void TargetGenerator::learnTargetType(ATarget* target)
{
	if(target != NULL)
		Data[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const & type_name)
{
	std::map<std::string, ATarget *>::iterator it = Data.find(type_name);
	if(it != Data.end())
		Data.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const & type_name)
{
	ATarget* ptr = NULL;
	std::map<std::string, ATarget *>::iterator it = Data.find(type_name);
	if(it != Data.end())
		ptr = it->second;
	return ptr;
}



