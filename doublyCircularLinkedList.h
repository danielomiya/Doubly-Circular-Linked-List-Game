#ifndef doublyCircularLinkedListHeader 
#define doublyCircularLinkedListHeader

#include <sstream>
#include "element.h"

class classDoublyCircularLinkedList {
    
    private:
        int numberOfElements;
        classElement* tailElement;

    public:

        /* setters */
        void setNumberOfElements(int value);
        void setElementValueByIndex(int index, int value);
        void addElementBeginning(int elementValue);
        void addElementEnd(int elementValue);
        void addElement(int previousElement, int elementValue);
        void removeElement(int elementIndex);

        /* getters */
        int getNumberOfElements();
        int elementValueByIndex(int index);
        bool empty();
        classElement* nextElement(classElement * element);
        classElement* previousElement(classElement * element);
        std::string stringify();

        /* print */
        void print();

        /* constuctor */ 
        classDoublyCircularLinkedList();
};

#endif
