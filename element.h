#ifndef elementHeader
#define elementHeader

class Element {
   private:
    int value;
    Element* prevElem;
    Element* nextElem;

   public:
    /* setters */
    void data(int newValue);
    void prev(Element* pointer);
    void next(Element* pointer);

    /* getters */
    int data();
    Element* next();
    Element* prev();

    /* constructor */
    Element();
    Element(int content);
};

#endif
