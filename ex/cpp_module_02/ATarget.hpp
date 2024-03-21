



#pragma once 
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private ://or protected
		std::string type;

	public :
		ATarget();
		ATarget(std::string type);
		ATarget(ATarget const & other);
		ATarget & operator=(ATarget const & other);
		virtual ~ATarget();


		std::string const & getType() const;
		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const & aspell) const;
};



