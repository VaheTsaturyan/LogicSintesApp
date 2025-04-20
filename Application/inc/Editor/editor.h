#pragma once

#include "action.h"

#include <stack>
#include <memory>

namespace edt
{
    
    

class Editor{
public:
    static Editor& getEditor();
    
    void proces(std::shared_ptr<IAction> action);
    void undo();
    void redo();
    void clear();
    unsigned int genereytId();
    
    private:
    Editor() = default;
    
    
private:
    std::stack<std::shared_ptr<IAction>> undo_;
    std::stack<std::shared_ptr<IAction>> redo_;
    unsigned int ithemCaont = 0;
    
};


} // namespace edt
