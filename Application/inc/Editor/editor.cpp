#include "editor.h"

#include <stdexcept>
#include <iostream>
namespace edt
{


Editor &Editor::getEditor(){
    static Editor editor;
    return editor;

}


void Editor::proces(std::shared_ptr<IAction> action){
    action->doo();
    undo_.push(action->returnInversAction());
    while(!redo_.empty()){
        redo_.pop();
    }
}

void Editor::undo(){
    if(undo_.empty()){
        return;
    }
    undo_.top()->doo();
    redo_.push(undo_.top()->returnInversAction());
    undo_.pop();
}

void Editor::redo(){
    if(redo_.empty()){
        return;
    }
    redo_.top()->doo();
    undo_.push(redo_.top()->returnInversAction());
    redo_.pop();
}

void Editor::clear(){
    while(!redo_.empty()){
        redo_.pop();
    }
    while(!undo_.empty()){
        undo_.pop();
    }
}

unsigned int Editor::genereytId(){
    return ithemCaont++;
}


} // namespace edt
