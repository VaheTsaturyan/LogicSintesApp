#include "action.h"


namespace edt
{
    

//////////////////////////////////////////////////////////////
///Add Edge action
//////////////////////////////////////////////////////////////    
AddGate::AddGate(std::shared_ptr<doc::Document> doc, std::shared_ptr<doc::Gate> gate )
{
    doc_ = doc;
    gate_ = gate;
}

void AddGate::doo()
{
    doc_->addGate( *gate_ );
}

std::shared_ptr<IAction> AddGate::returnInversAction()
{
    return std::make_shared<RemovGate>( doc_, gate_ );
}



//////////////////////////////////////////////////////////////
///Remov Gate action
//////////////////////////////////////////////////////////////
RemovGate::RemovGate( std::shared_ptr<doc::Document> doc, std::shared_ptr<doc::Gate> gate )
{
    doc_ = doc;
    gate_ = gate;
}

void RemovGate::doo()
{
    doc_->removeaGate( gate_->getId() );
}

std::shared_ptr<IAction> RemovGate::returnInversAction()
{
    return std::make_shared<AddGate>( doc_, gate_ );
}




//////////////////////////////////////////////////////////////
///Add Edge action
/////////////////////////////////////////////////////////////
AddEdge::AddEdge(std::shared_ptr<doc::Gate> gateC, unsigned int port , std::shared_ptr<doc::Gate> gateI )
{
    gateC_ = gateC;
    gateI_ = gateI;
    port_ = port;
}

void AddEdge::doo()
{
    gateC_->addConect( gateI_->getId() );
    gateI_->addInput( port_, gateC_->getId());
}

std::shared_ptr<IAction> AddEdge::returnInversAction()
{
    return std::make_shared<RemovEdge>( gateC_, port_, gateI_ );
}




//////////////////////////////////////////////////////////////
///Remov Edge action
//////////////////////////////////////////////////////////////
RemovEdge::RemovEdge(std::shared_ptr<doc::Gate> gateC, unsigned int port, std::shared_ptr<doc::Gate> gateI )
{
    gateC_ = gateC;
    gateI_ = gateI;
    port_ = port;
}

void RemovEdge::doo()
{
    gateC_->removeConect( gateI_->getId() );
    gateI_->removeInput( port_ );
}

std::shared_ptr<IAction> RemovEdge::returnInversAction()
{
    return std::make_shared<AddEdge>( gateC_, port_, gateI_ );
}





//////////////////////////////////////////////////////////////
///Achange Gate Type action
//////////////////////////////////////////////////////////////
ChangeGateType::ChangeGateType( std::shared_ptr<doc::Gate> gate, const std::string& type )
{
    gate_ = gate;
    type_ = type;
}

void ChangeGateType::doo()
{
    std::string firstType = gate_->getType();
    gate_->setType( type_ );
    type_ = std::move( firstType );
}

std::shared_ptr<IAction> ChangeGateType::returnInversAction()
{
    return std::make_shared<ChangeGateType>( gate_, type_ );
}

} // namespace edt