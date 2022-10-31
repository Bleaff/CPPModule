#pragma once
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
protected:
    bool gateMode;
public:
    ScavTrap(std::string _name);
    ScavTrap(ScavTrap const &other);
    ~ScavTrap();
    ScavTrap &operator=(ScavTrap const &other);
    void attack(const std::string& target);
    bool getGate() const;
    void guardGate();
};
#endif
