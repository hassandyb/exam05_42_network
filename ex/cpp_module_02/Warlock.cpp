

#include "Warlock.hpp"


// canonical form :

Warlock::Warlock() : name("default_name"), title("default_title") {};

Warlock::Warlock(const Warlock & other)
{
	*this = other;
};

Warlock & Warlock::operator=(Warlock const & other)
{

	this->name = other.name;
	this->title = other.title;
	// this->Book = other.Book;
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
	this->Book.learnSpell(spell_ptr);
}

void Warlock::forgetSpell(std::string spell_name)
{
	this->Book.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const & target)// we should add const...
{
	ASpell * spell_ptr = Book.createSpell(spell_name);
	if(spell_ptr != NULL)
		spell_ptr->launch(target);
		
}



