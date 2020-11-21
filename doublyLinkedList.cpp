#include <sstream>
#include "doublyLinkedList.h"
#include "element.h"

bool DoublyLinkedList::empty() {
    return headElem == nullptr;
}

void DoublyLinkedList::push(int data) {
    Element* el = new Element(data);

    if (headElem == nullptr) {
        el->next(el);
        el->prev(el);
        headElem = el;

        return;
    }

    el->prev(headElem->prev());
    el->next(headElem);

    headElem->prev()->next(el);
    headElem->prev(el);
}

std::string DoublyLinkedList::stringify() {
    std::stringstream stream;
    Element *cursor = headElem;

    if (cursor == nullptr) {
        return std::string("[ ]");
    }

    stream << "[ ";

    do {
        stream << cursor->data() << " ";
    } while (cursor != headElem);

    stream << "]";

    return stream.str();
}
