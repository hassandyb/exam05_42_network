

#include "SpellBook.hpp"



SpellBook::SpellBook() {};

SpellBook::SpellBook(SpellBook const & other) { *this = other;};

SpellBook & SpellBook::operator=(SpellBook const & other)
{
	this->Data = other.Data;
	return *this;
}

SpellBook::~SpellBook() {};






void SpellBook::learnSpell(ASpell* spell)
{
	if(spell == NULL)
		return;
	Data[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & spell_name)
{
	std::map<std::string, ASpell *>::iterator it = Data.find(spell_name);
	if( it != Data.end())
	{
		delete it->second;
		Data.erase(it);
	}

}

ASpell* SpellBook::createSpell(std::string const & spell_name)// find a spelnn in data are return it ..
{
	std::map<std::string, ASpell * >::iterator it = Data.find(spell_name);
	if(it != Data.end())
	{
		return it->second;// i am not sure if we should alocate first ...
	}
	return NULL;
}