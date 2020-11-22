#include <stdlib.h>
#include <iostream>

#include "doublyCircularLinkedList.h"


classDoublyCircularLinkedList::classDoublyCircularLinkedList(){
    tailElement = nullptr;
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

bool classDoublyCircularLinkedList::empty() {
    return tailElement == nullptr;
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

std::string classDoublyCircularLinkedList::stringify() {

    std::stringstream stream;
    classElement * cursor = tailElement->getNextElementObject();

    if (cursor == nullptr) {
        return std::string("[ ]");
    }

    stream << "[ ";

    do {
        stream << cursor->getElementValue() << " ";
    } while (cursor != tailElement->getNextElementObject());

    stream << "]";

    return stream.str();
}

int classDoublyCircularLinkedList::getNumberOfElements(){
    return numberOfElements;
}

void classDoublyCircularLinkedList::setNumberOfElements(int value){
    numberOfElements = value;
}

void classDoublyCircularLinkedList::addElementEnd(int elementValue){
    if (numberOfElements>0){
        classElement * element;
        element->setValue(elementValue);
        classElement * headElement = tailElement->getNextElementObject();

        tailElement->setNextElementObject(element);
        headElement->setPreviousElementObject(element);
        element->setNextElementObject(headElement);
        element->setPreviousElementObject(tailElement);
        tailElement = element;
    }
    else{
        classElement * element;
        element->setValue(elementValue);
        tailElement = element;
        element->setPreviousElementObject(element);
        element->setNextElementObject(element);
    }
}

void classDoublyCircularLinkedList::removeElement(int elementIndex){
    classElement * cursor = tailElement;
    cursor->getNextElementObject();
    int count = 0;
    
    while (count != elementIndex){
        cursor->getNextElementObject();
        count++;
    }

    classElement * previousElement = cursor->getPreviousElementObject();
    classElement * nextElement = cursor->getNextElementObject();

    previousElement->setNextElementObject(nextElement);
    nextElement->setPreviousElementObject(previousElement);
}

int classDoublyCircularLinkedList::elementValueByIndex(int index){
    classElement * cursor = tailElement;
    cursor->getNextElementObject();
    int count = 0;
    
    while (count != index){
        cursor->getNextElementObject();
        count++;
    }
    
    return cursor->getElementValue();
}

void classDoublyCircularLinkedList::addElement(int previousElement, int elementValue){
    classElement * cursor = tailElement;
    cursor->getNextElementObject();
    int count = 0;
    
    while (count != previousElement){
        cursor->getNextElementObject();
        count++;
    }

    classElement * element;
    element->setValue(elementValue);
    classElement * nextElement;

    element->setNextElementObject(nextElement);
    element->setPreviousElementObject(cursor);
    nextElement->setPreviousElementObject(element);
    cursor->setNextElementObject(element);
}