#include <stdlib.h>
#include "element.h"

classElement::classElement(){
    previousElementObject = NULL;
    nextElementObject = NULL;
}

void classElement::setValue(int newValue){
    value = newValue;
}

void classElement::setNextElementObject(classElement *pointer){
    nextElementObject = pointer;
}
