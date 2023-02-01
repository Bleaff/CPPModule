#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;
public:
    ASpell(std::string name, std::string effects);
    ASpell(ASpell const &other);
    ASpell & operator=(ASpell const &other);
    ~ASpell();

    std::string const &getName()const;
    std::string const &getEffects()const;

    virtual ASpell *clone() const = 0;
    void launch(ATarget const &target) const;

};
#endif