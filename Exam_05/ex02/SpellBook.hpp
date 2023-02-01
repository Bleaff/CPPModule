#ifndef SpellBook_HPP
#define SpellBook_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook
{
private:
    SpellBook(const SpellBook &other);
    SpellBook &operator=(const SpellBook &other);
    std::map <std::string, ASpell *> learned_spell;
    std::map <std::string, ASpell *>::iterator iter;

public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string const &spell_name);
    ASpell* createSpell(std::string const &spell_name);
};
#endif