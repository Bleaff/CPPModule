#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const & other);
		~Brain();
		Brain &operator=(Brain const &rhs);
        std::string *idias;
};


#endif