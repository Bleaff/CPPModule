#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain-constructor (basic)" << std::endl;
}

Brain::Brain(Brain const & other)
{
    for (size_t i = 0; i < 100; i++)
        this->idias[i] = other.idias[i];
    
    std::cout << "Brain-constructor (coping)" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    std::cout << "Brain-destructor (basic)" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs)
{
    for (size_t i = 0; i < 100; i++)
        this->idias[i] = rhs.idias[i];
    return (*this);
}