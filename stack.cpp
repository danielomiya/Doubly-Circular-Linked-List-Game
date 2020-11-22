#include "stack.h"

stack::stack(){
    size = 0;
    topElement = nullptr;
}

void stack::push(int value){

    classElement * element;
    element->setValue(value);

    if (size > 0){
        element->setPreviousElementObject(topElement);
        topElement = element;
    }
    else{
        topElement = element;
    }
}

int stack::pop(){
    int value = topElement->getElementValue();

    classElement * previousElementObject;
    previousElementObject = topElement->getPreviousElementObject();
    topElement = previousElementObject;
    
    return value;
}