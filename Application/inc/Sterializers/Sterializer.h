#pragma once


#include "../Document/document.h"

#include <boost/json.hpp>
#include <memory>

class Sterializer{
public:
    Sterializer() = default;
    void save( const std::string& path, std::shared_ptr<doc::Document> doc );
    std::shared_ptr<doc::Document> open(const std::string& path);

private:
    boost::json::object gateToJson(doc::Gate& gate);
    std::shared_ptr<doc::Gate> jsonToGate(const boost::json::object& obj);

};

