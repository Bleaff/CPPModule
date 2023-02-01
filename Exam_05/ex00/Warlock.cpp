#include "Warlock.hpp"

Warlock::    Warlock(std::string w_name, std::string w_title): title(w_title), name(w_name)
{
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::Warlock(const Warlock &other)
{
    *this = other;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

std::string Warlock::getName() const
{
    return this->name;
}

std::string Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(std::string new_title)
{
    this->title = new_title;
}

void Warlock::introduce() const
{
    std::cout << this->getName() <<": I am " << this->getName() << ", " <<this->getTitle() << "!" << std::endl;
}
