#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie( std::string name_ )
{
    this->name = name_;
}

Zombie::~Zombie()
{
    std::cout << this->name << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
