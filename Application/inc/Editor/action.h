#pragma once 
#include <memory>
#include <string>
#include "../Document/document.h"
namespace edt
{
 
class IAction
{
public:
    virtual ~IAction() = default;
    virtual void doo() = 0;
    virtual std::shared_ptr<IAction> returnInversAction() = 0;

};


//////////////////////////////////////////////////////////////
///Add Gate action
//////////////////////////////////////////////////////////////
class AddGate : public IAction
{
public:
    AddGate(std::shared_ptr<doc::Document> doc, std::shared_ptr<doc::Gate> gate );
    void doo() override;
    std::shared_ptr<IAction> returnInversAction() override;
private:
    std::shared_ptr<doc::Document> doc_;
    std::shared_ptr<doc::Gate> gate_;
};
 



//////////////////////////////////////////////////////////////
///Remove Gate action
//////////////////////////////////////////////////////////////
class RemovGate : public IAction
{
public:
    RemovGate( std::shared_ptr<doc::Document> doc, std::shared_ptr<doc::Gate> gate );
    void doo() override;
    std::shared_ptr<IAction> returnInversAction() override;
private:
    std::shared_ptr<doc::Document> doc_;
    std::shared_ptr<doc::Gate> gate_;
};
 


//////////////////////////////////////////////////////////////
///Add Edge
//////////////////////////////////////////////////////////////
class AddEdge : public IAction
{
public:
    AddEdge( std::shared_ptr<doc::Gate> gateC, unsigned int port, std::shared_ptr<doc::Gate> gateI );
    void doo() override;
    std::shared_ptr<IAction> returnInversAction() override;
private:
    std::shared_ptr<doc::Gate> gateC_;
    std::shared_ptr<doc::Gate> gateI_;
    unsigned int port_;
};
 



//////////////////////////////////////////////////////////////
///Remove edge action
//////////////////////////////////////////////////////////////
class RemovEdge : public IAction
{
public:    
    RemovEdge( std::shared_ptr<doc::Gate> gateC, unsigned int port, std::shared_ptr<doc::Gate> gateI );
    void doo() override;
    std::shared_ptr<IAction> returnInversAction() override;
private:    
    std::shared_ptr<doc::Gate> gateC_;
    std::shared_ptr<doc::Gate> gateI_;
    unsigned int port_;
};



//////////////////////////////////////////////////////////////
///Achange Gate Type action
//////////////////////////////////////////////////////////////
class ChangeGateType : public IAction
{
public:
    ChangeGateType(std::shared_ptr<doc::Gate> gate, const std::string& type);
    void doo() override;
    std::shared_ptr<IAction> returnInversAction() override;
private:
    std::shared_ptr<doc::Gate> gate_;
    std::string type_;
};


} // namespace edt
