#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zombo = Zombie(name);
    zombo.announce();
}
