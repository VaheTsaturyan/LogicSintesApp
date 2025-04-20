#include "Sterializer.h"
#include <fstream>
#include <memory>
#include <iostream>

void Sterializer::save(const std::string &path, std::shared_ptr<doc::Document> doc)
{
    boost::json::array jsonArray;
    boost::json::object gateCaunt;
    gateCaunt["gate caunt"] = doc->getGateCaunt();
    jsonArray.push_back(gateCaunt);
    for (auto el : *doc) {
        jsonArray.push_back(gateToJson(el.second));
    }

    std::string jsonString = boost::json::serialize(jsonArray);

    std::ofstream outFile(path);
    outFile << jsonString;
    outFile.close();
}

std::shared_ptr<doc::Document> Sterializer::open(const std::string &path)
{
    std::ifstream file(path);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file\n");
    }

    std::string json_str((std::istreambuf_iterator<char>(file)),
                          std::istreambuf_iterator<char>());
    file.close();

    boost::json::value jv = boost::json::parse(json_str);
    boost::json::array json_array = jv.as_array();
    boost::json::object obj = jv.as_object();
    unsigned int gateCaunt = obj["gate caunt"].as_uint64();

    std::shared_ptr<doc::Document> doc = std::make_shared<doc::Document>();
    doc->setgateCaunt(gateCaunt);

    for (const auto& inner_array : json_array) {
        std::shared_ptr<doc::Gate> gate = jsonToGate(inner_array.as_object());
        doc->addGate(*gate);
    }

    return doc;
}

/*
    std::unordered_map<unsigned int, unsigned int> inputs;
    std::unordered_set<unsigned int> conects;
    std::string type;
    unsigned int id;
*/

boost::json::object Sterializer::gateToJson( doc::Gate &gate)
{
    boost::json::object jsonObj;

    jsonObj["id"] = gate.getId();
    jsonObj["type"] = gate.getType();
    boost::json::object conectsObj;
    std::unordered_set<unsigned int>& conects = gate.getConects();
    
    int i = 1;
    for(auto el : conects){
        conectsObj[std::to_string(i)] = el;
    }
    jsonObj["conects"] = conectsObj;
    
    boost::json::object inputsObj;
    std::unordered_map<unsigned int, unsigned int>& inputs = gate.getInputs();
    for(auto el : inputs){
        inputsObj[std::to_string(el.first)] = el.second;
    }
    jsonObj["inputs"] = inputsObj;

    return jsonObj;    
}



std::shared_ptr<doc::Gate> Sterializer::jsonToGate(const boost::json::object &obj)
{
    if(obj.find("id") != nullptr)
    {
        std::unordered_set<unsigned int> conects;
        std::unordered_map<unsigned int, unsigned int> inputs;

        int id = obj.at("id").as_uint64(); 
        std::string type =  std::string(obj.at("type").as_string().c_str());

        boost::json::object conectsObj = obj.at("conects").as_object();
        for(auto el : conectsObj)
        {
            if(el.value().is_uint64())
            {
                conects.emplace(el.value().as_uint64());
            }
        }

        boost::json::object inputsObj = obj.at("inputs").as_object();
        for (const auto& [key, value] : inputsObj) {
            try {
                unsigned int keyInt = std::stoul(std::string(key));
                if (value.is_uint64()) {
                    inputs.emplace(keyInt, static_cast<unsigned int>(value.as_uint64()));
                } else {
                    std::cerr << "Warning: Non-uint64 value in 'inputs' ignored: " << key << std::endl;
                }
            } catch (const std::exception& e) {
                std::cerr << "Error converting key '" << key << "' to unsigned int: " << e.what() << std::endl;
            }
        }
        std::shared_ptr<doc::Gate> gate = std::make_shared<doc::Gate>();
        gate->setType(type);
        gate->setId(id);
        gate->setConects(std::move(conects));
        gate->setInputs(std::move(inputs));
    }
    return nullptr;
}

