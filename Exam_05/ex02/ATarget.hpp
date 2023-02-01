#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
private:
    std::string type;
public:
    ATarget(std::string type);
    ATarget(ATarget const &other);
    ATarget & operator=(ATarget const &other);
    virtual ~ATarget();

    std::string const &getType() const;
    void getHitBySpell(ASpell const &spell) const;
    virtual ATarget * clone() const = 0;
};

#endif
