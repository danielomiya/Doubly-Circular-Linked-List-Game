#include <stdlib.h>
#include <sstream>
#include "element.h"

classElement::classElement(){
    previousElementObject = nullptr;
    nextElementObject = nullptr;
}

void classElement::setValue(int newValue){
    elementValue = newValue;
}

void classElement::setNextElementObject(classElement * object){
    nextElementObject = object;
}

void classElement::setPreviousElementObject(classElement * object){
    previousElementObject = object;
}

int classElement::getElementValue(){
    return elementValue;
}

classElement * classElement::getNextElementObject(){
    return nextElementObject;
}

classElement * classElement::getPreviousElementObject(){
    return previousElementObject;
}