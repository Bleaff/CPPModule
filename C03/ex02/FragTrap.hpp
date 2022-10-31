#pragma once
#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
public:
    FragTrap(std::string _name);
    FragTrap(FragTrap const &other);
    ~FragTrap();
    FragTrap &operator=(FragTrap const &other);
    void attack(const std::string& target);
	void highFivesGuys(void);
};
#endif
