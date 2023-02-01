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
    std::map<std::string, ASpell *>::iterator it_begin = this->learned_spell.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->learned_spell.end();
    while (it_begin != it_end)
        delete it_begin->second;
        it_begin++;
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

void Warlock::learnSpell(ASpell *spell){
    learned_spell[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell_name){
    iter = learned_spell.find(spell_name);
    if (iter != learned_spell.end())
    {
        delete iter->second;
        learned_spell.erase(iter);
    }    
}

void Warlock::launchSpell(std::string spell_name, ATarget &target){
    iter = learned_spell.find(spell_name);
    if (iter != learned_spell.end())
        iter->second->launch(target);
}
