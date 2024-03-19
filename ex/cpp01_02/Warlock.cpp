

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







void Warlock::learnSpell(ASpell *spell_ptr)
{
	if(spell_ptr != NULL)
	{
		if(Data.find(spell_ptr->getName()) == Data.end())// lets check if this spell does not exist already
			Data[spell_ptr->getName()] = spell_ptr->clone();
	}
}

void Warlock::forgetSpell(std::string spell_name)
{
	if(Data.find(spell_name) == Data.end())
		return;
	std::map<std::string, ASpell *>::iterator it;

	it = Data.find(spell_name);
	Data.erase(it);
}

void Warlock::launchSpell(std::string spell_name, ATarget const & target)// we should add const...
{
	if(Data.find(spell_name) != Data.end())
		Data[spell_name]->launch(target);
}



