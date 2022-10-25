#include "Zombie.hpp"

int main()
{
    Zombie zombie = Zombie("Bob");
    Zombie *pzombie = newZombie("Pinters");
    randomChump("Peter");
    zombie.announce();
    (*pzombie).announce();
    delete pzombie;
    return (0);
}
