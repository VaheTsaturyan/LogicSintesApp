#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp> // JSON գրադարան
#include "Surelog/SourceCompile/ParseFile.h"
#include "Surelog/SourceCompile/ModuleDefinition.h"
#include "Surelog/SourceCompile/Design.h"// Surelog-ի API
#include "Surelog/SourceCompile/Compiler.h"   // Surelog-ի API
     
#include <uhdm/UhdmVerilog.h>

class VerilogParser
{
public:
    void verilog2Json( const std::string& verilogPath, const std::string& jsonPath );
    void json2Verilog( const std::string& jsonPath, const std::string& verilogPath );

private:


};
