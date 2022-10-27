#pragma once
#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    int hitp_points, energy_points, attack_damage;
    std::string name;
public:
    ClapTrap(std::string _name);
    ClapTrap(ClapTrap const &other);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
    int getHP(void) const;
    int getEP(void) const;
    int getAD(void) const;
};
#endif
