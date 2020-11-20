#ifndef elementHeader 
#define elementHeader


class Element {
    
    private:
        int elementValue;
        Element *previousElementObject;
        Element *nextElementObject;

    public:
    
        /* set */
        void setValue(int newValue);
        void setPreviousElementObject(Element *pointer);
        void setNextElementObject(Element *pointer);

        /* get */
        int getElementValue();
        Element * getNextElementObject();
        Element * getPreviousElementObject();

        /* constructor */
        Element();
};


#endif