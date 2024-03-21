

#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <map>

class SpellBook
{
	private :

		std::map< std::string, ASpell *>  Data;


		SpellBook(SpellBook const & other);
		SpellBook & operator=(SpellBook const & other);
	public :
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spell_name);
		ASpell* createSpell(std::string const & spell_name);
};