#ifndef doublyLinkedListHeader
#define doublyLinkedListHeader

#include <string>
#include "element.h"

class DoublyLinkedList {
   private:
    Element* headElem;

   public:
    Element* cursor();
    bool empty();
    void push(int data);  // adds to end
    std::string stringify();
};

#endif
