#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombo = new Zombie(name);
    return (zombo);
}