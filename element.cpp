#include <stdlib.h>
#include "element.h"

classElement::classElement(){
    previousElementObject = NULL;
    nextElementObject = NULL;
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