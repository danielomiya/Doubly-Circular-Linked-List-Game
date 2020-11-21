#include <stdlib.h>
#include <iostream>

#include "doublyCircularLinkedList.h"


classDoublyCircularLinkedList::classDoublyCircularLinkedList(){
    tailElement = NULL;
    numberOfElements = 0;
}

void classDoublyCircularLinkedList::addElementBeginning(int elementValue){
    if (numberOfElements > 0){
        classElement * element;
        element->setValue(elementValue);

        classElement * headElement = tailElement->getNextElementObject();
        classElement * seccondElement =  headElement->getNextElementObject();
        
        element->setPreviousElementObject(headElement);
        element->setNextElementObject(seccondElement);

        headElement->setNextElementObject(element);
        seccondElement->setPreviousElementObject(element);
    }
    else{
        classElement * element;
        element->setValue(elementValue);
        tailElement = element;
        element->setPreviousElementObject(element);
        element->setNextElementObject(element);
    }
    numberOfElements++;
}

void classDoublyCircularLinkedList::print(){
    std::cout << "\n [";
    classElement * cursor = tailElement;
    cursor->getNextElementObject();
    
    std::cout << cursor->getElementValue();
    while (cursor != tailElement){
        std::cout << cursor->getElementValue();
        cursor->getNextElementObject();
    }
    std::cout << "]";
    
}

