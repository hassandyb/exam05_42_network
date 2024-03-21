



#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <map>

class TargetGenerator
{
	private :

		TargetGenerator(TargetGenerator const & other);
		TargetGenerator & operator=(TargetGenerator const & other);

		std::map<std::string, ATarget *> Data;

	public :
		TargetGenerator();
		~TargetGenerator();


		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const &type_name);
		ATarget* createTarget(std::string const &type_name);
};





