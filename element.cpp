#include <stdlib.h>
#include "element.h"

classElement::classElement(){
    previousElementObject = NULL;
    nextElementObject = NULL;
}

void classElement::setValue(int newValue){
    elementValue = newValue;
}

void classElement::setNextElementObject(classElement *pointer){
    nextElementObject = pointer;
}

void classElement::setPreviousElementObject(classElement *pointer){
    previousElementObject = pointer;
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