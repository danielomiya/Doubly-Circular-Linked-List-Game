#include <stdlib.h>
#include "element.h"

Element::Element(){
    previousElementObject = nullptr;
    nextElementObject = nullptr;
}

void Element::setValue(int newValue){
    elementValue = newValue;
}

void Element::setNextElementObject(Element *pointer){
    nextElementObject = pointer;
}

void Element::setPreviousElementObject(Element *pointer){
    previousElementObject = pointer;
}

int Element::getElementValue(){
    return elementValue;
}

Element * Element::getNextElementObject(){
    return nextElementObject;
}

Element * Element::getPreviousElementObject(){
    return previousElementObject;
}