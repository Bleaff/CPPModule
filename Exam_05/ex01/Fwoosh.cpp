#include "Fwoosh.hpp"

Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed"){}

Fwoosh::~Fwoosh(){}

ASpell *Fwoosh::clone() const
{
    ASpell *clone  = new Fwoosh();
    return clone;
}