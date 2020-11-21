#include "element.h"
#include <stdlib.h>

Element::Element() {
    prevElem = nullptr;
    nextElem = nullptr;
}

Element::Element(int content) {
    prevElem = nullptr;
    nextElem = nullptr;
    data(content);
}

void Element::data(int newValue) {
    value = newValue;
}

void Element::next(Element* pointer) {
    nextElem = pointer;
}

void Element::prev(Element* pointer) {
    prevElem = pointer;
}

int Element::data() {
    return value;
}

Element* Element::next() {
    return nextElem;
}

Element* Element::prev() {
    return prevElem;
}
