#pragma once


namespace com
{
    
    
class IComand{
public:
    virtual ~IComand() = default;
    virtual void execute() = 0;
};
    


class AddGate  : public IComand
{

};

class RemoveGate : public IComand
{

};


class AddEdge : public IComand
{

};

class RemoveEdge : public IComand
{
    
};

} // namespace com