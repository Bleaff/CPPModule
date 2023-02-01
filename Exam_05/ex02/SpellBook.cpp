#include "SpellBook.hpp"


SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it_begin = this->learned_spell.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->learned_spell.end();
    while (it_begin != it_end)
        delete it_begin->second;
        it_begin++;
}

void SpellBook::learnSpell(ASpell *spell){
    learned_spell[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell_name){
    iter = learned_spell.find(spell_name);
    if (iter != learned_spell.end())
    {
        delete iter->second;
        learned_spell.erase(iter);
    }    
}

ASpell* SpellBook::createSpell(std::string const &spell_name){
    iter = learned_spell.find(spell_name);
    if (iter != learned_spell.end())
        return iter->second->clone();
    return NULL;
}
