#ifndef doublyLinkedListHeader
#define doublyLinkedListHeader

#include "element.h"
#include <string>

class DoublyLinkedList {
   private:
    Element* headElem;

   public:
    bool empty();
    void push(int data);  // adds to end
    std::string stringify();
};

#endif
