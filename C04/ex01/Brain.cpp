#include "Brain.hpp"

Brain::Brain()
{
    this->idias = new std::string [100];
    std::cout << "Brain-constructor (basic)" << std::endl;
}

Brain::Brain(Brain const & other)
{
    this->idias = other.idias;
    std::cout << "Brain-constructor (coping)" << std::endl;
    *this = other;
}

Brain::~Brain()
{
    delete this->idias;
    std::cout << "Brain-destructor (basic)" << std::endl;
}

Brain & Brain::operator=(Brain const &rhs)
{
    
    return (*this);
}