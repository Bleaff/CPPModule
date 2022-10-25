#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(/* args */);
    ~Weapon();
    const std::string& getType();
};

Weapon:: Weapon(/* args */)
{
}

Weapon::~ Weapon()
{
}


#endif