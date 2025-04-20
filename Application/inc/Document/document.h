#pragma once
#include <unordered_map>
#include "gets.h"


namespace doc
{

class Document
{
public:
    using iterator = std::unordered_map<unsigned int, Gate>::iterator;

public:

    void addGate(const Gate& gate);
    void removeaGate(unsigned int id);

    iterator begin();
    iterator end();
    iterator find(unsigned int id);
    Gate& at(unsigned int id);
    unsigned int getGateCaunt();
    void setgateCaunt(unsigned int caunt);

private:
    std::unordered_map<unsigned int, Gate> gateMap;
    unsigned int GateCaunt = 0;
};  


} // namespace doc
