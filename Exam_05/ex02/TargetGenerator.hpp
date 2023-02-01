#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
    TargetGenerator(const TargetGenerator &other);
    TargetGenerator &operator=(const TargetGenerator &other);
    std::map <std::string, ATarget *> learned_Target;
    std::map <std::string, ATarget *>::iterator iter;

public:
    TargetGenerator();
    ~TargetGenerator();
    void learnTargetType(ATarget *Target);
    void forgetTargetType(std::string const &Target_name);
    ATarget* createTarget(std::string const &Target_name);
};
#endif