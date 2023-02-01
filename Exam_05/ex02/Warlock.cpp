#include "Warlock.hpp"

Warlock::    Warlock(std::string w_name, std::string w_title): title(w_title), name(w_name)
{
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

Warlock & Warlock::operator=(const Warlock &other)
{
    if (this != &other)
    {
        this->name = other.getName();
        this->title = other.getTitle();
    }
    return *this;
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
    spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell_name){
    spellbook.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget &target){
    ASpell *spell = spellbook.createSpell(spell_name);
    ATarget const *test = 0;
    if (&target == test || spell == NULL)
        return ;
    spell->launch(target);
}
