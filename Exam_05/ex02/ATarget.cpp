#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::ATarget(std::string type): type(type){}

ATarget::~ATarget(){}

std::string const &ATarget::getType() const
{
    return this->type;
}

ATarget::ATarget(ATarget const &other)
{
    if (this != &other)
    {
        *this = other;
    }
}

ATarget & ATarget::operator=(ATarget const &other)
{
    this->type = other.getType();
    return *this;
}

