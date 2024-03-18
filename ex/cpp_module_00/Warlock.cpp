

#include "Warlock.hpp"


// canonical form :

Warlock::Warlock() : name("default_name"), title("default_title") {};

Warlock::Warlock(const Warlock & other)
{
	this->name = other.name;
	this->title = other.title;
};

Warlock & Warlock::operator=(Warlock const & other)
{

	this->name = other.name;
	this->title = other.title;
	return *this;
};
// ----------

Warlock::Warlock(std::string name, std::string title) : name(name), title(title) 
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
};


Warlock::~Warlock() 
{
	std::cout << this->name << ": My job here is done!" << std::endl;
};


// Geters ....
std::string const & Warlock::getName() const
{
	return this->name;
};

std::string const & Warlock::getTitle() const
{
	return this->title;
};

// setters : .....

void Warlock::setTitle(std::string const & title)
{
	this->title = title;
}



void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}


