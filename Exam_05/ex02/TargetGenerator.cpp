#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator it_begin = this->learned_Target.begin();
    std::map<std::string, ATarget *>::iterator it_end = this->learned_Target.end();
    while (it_begin != it_end)
        delete it_begin->second;
        it_begin++;
}

void TargetGenerator::learnTargetType(ATarget *Target){
    learned_Target[Target->getType()] = Target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &Target_name){
    iter = learned_Target.find(Target_name);
    if (iter != learned_Target.end())
    {
        delete iter->second;
        learned_Target.erase(iter);
    }    
}

ATarget* TargetGenerator::createTarget(std::string const &Target_name){
    iter = learned_Target.find(Target_name);
    if (iter != learned_Target.end())
        return iter->second->clone();
    return NULL;
}
