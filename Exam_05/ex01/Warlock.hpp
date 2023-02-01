#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
private:
    std::string title;
    std::string name;
    Warlock(const Warlock &other);
    Warlock &operator=(const Warlock &other);
    std::map <std::string, ASpell *> learned_spell;
    std::map <std::string, ASpell *>::iterator iter;

public:
    Warlock(std::string w_name, std::string w_title);
    ~Warlock();

    std::string getTitle(void) const;
    std::string getName(void)  const;

    void setTitle(std::string new_title);

    void introduce(void) const;

    void learnSpell(ASpell *spell);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget &target);
};
#endif