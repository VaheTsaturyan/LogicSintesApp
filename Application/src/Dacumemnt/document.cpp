#include "../../inc/Document/document.h"


namespace doc {

    
void Document::addGate(const Gate &gate)
{
    this->gateMap.emplace(gate.getId(), gate);
}

void Document::removeaGate(unsigned int id)
{
    gateMap.erase(id);
}

Document::iterator Document::begin()
{
    return gateMap.begin();
}

Document::iterator Document::end()
{
    return gateMap.end();
}

Document::iterator Document::find(unsigned int id)
{
    return gateMap.find(id);
}

Gate &Document::at(unsigned int id)
{
    gateMap.at(id);
}

unsigned int Document::getGateCaunt()
{
    return this->GateCaunt;
}
void Document::setgateCaunt(unsigned int caunt)
{
    GateCaunt = caunt;
}


} // namespace doc