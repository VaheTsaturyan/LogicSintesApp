#pragma once

#include <string>
#include <unordered_map>
#include <unordered_set>

namespace doc
{

class Gate
{
public:
    Gate() = default;  // Default constructor
    void setInputs(std::unordered_map<unsigned int, unsigned int>&& inputs);
    void setConects(std::unordered_set<unsigned int>&& conects);
    void setId(unsigned int id);
    void setType(const std::string& type);

    void addInput(unsigned int inputPort, unsigned int id);
    void removeInput(unsigned int inputPort);

    void addConect(unsigned int gateId);
    void removeConect(unsigned int gateId);

    std::unordered_set<unsigned int>& getConects() ;
    std::unordered_map<unsigned int, unsigned int>& getInputs();
    const std::string& getType() const ;
    unsigned int getInput(unsigned int inputPort) const;
    unsigned int getId() const ;



private:
    std::unordered_map<unsigned int, unsigned int> inputs;
    std::unordered_set<unsigned int> conects;
    std::string type;
    unsigned int id;
//    unsigned int input1;
//    unsigned int input2;

};




} // namespace doc
