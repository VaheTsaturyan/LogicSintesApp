#include "../../inc/Document/gets.h"

namespace doc
{


void Gate::setInputs(std::unordered_map<unsigned int, unsigned int> &&inputs)
{
    this->inputs = std::move(inputs);
}

void Gate::setConects(std::unordered_set<unsigned int> &&conects)
{
    this->conects = std::move(conects);
}

void Gate::setType(const std::string &type)
{
    this->type = type;
}

void Gate::setId(unsigned int id)
{
    this->id = id;
}

void Gate::addInput(unsigned int inputPort, unsigned int ID)
{
    this->inputs.emplace(inputPort, ID);
}

void Gate::removeInput(unsigned int inputPort)
{
    auto it = inputs.find(inputPort);
    inputs.erase(it);
}

void Gate::addConect(unsigned int gateId)
{
    conects.emplace(gateId);
}

void Gate::removeConect(unsigned int gateId)
{
    conects.erase(gateId);
}

std::unordered_set<unsigned int> &Gate::getConects()
{
    return conects;
}

const std::string &Gate::getType() const
{
    return type;
}

std::unordered_map<unsigned int, unsigned int> &Gate::getInputs()
{
    return inputs;
}

unsigned int Gate::getInput(unsigned int inputPort) const 
{
    auto it = inputs.find(inputPort);
    if(it != nullptr)
    {
        return it->second;
    }
    return 0;
}

unsigned int Gate::getId() const
{
    return id;
}
    
} // namespace doc
