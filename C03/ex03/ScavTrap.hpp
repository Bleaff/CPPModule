#pragma once
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    protected:
        bool gateMode;
    public:
        ScavTrap(std::string _name);
        ScavTrap(ScavTrap const &other);
        ~ScavTrap(void);
        ScavTrap &operator=(ScavTrap const &other);
        void attack(const std::string& target);
        bool getGate(void) const;
        void guardGate(void);
    protected:
        ScavTrap(void);
};
#endif
