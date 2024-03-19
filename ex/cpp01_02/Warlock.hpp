
#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class Warlock
{
	private :
		std::string name;
		std::string title;

		std::map<std::string, ASpell *> Data;

		Warlock();
		Warlock & operator=(Warlock const & other);
		Warlock(Warlock const &  other);
	public :
		
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;

		void setTitle(std::string const & title);

		void introduce() const;

		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, ATarget const & target);
};