#ifndef elementHeader 
#define elementHeader


class classElement {
    
    private:
        int value;
        int size;
        classElement *previousElementObject;
        classElement *nextElementObject;

    public:
    
        /* set */
        void setValue(int newValue);
        void setPreviousElementObject(classElement *pointer);
        void setNextElementObject(classElement *pointer);

        /* get */
        int getElementValue();
        int getNextElementObject();
        int getPreviousElementObject();

        /* constructor */
        classElement();
};


#endif