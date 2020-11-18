#ifndef elementHeader 
#define elementHeader


class classElement {
    
    private:
        int elementValue;
        classElement *previousElementObject;
        classElement *nextElementObject;

    public:
    
        /* set */
        void setValue(int newValue);
        void setPreviousElementObject(classElement *pointer);
        void setNextElementObject(classElement *pointer);

        /* get */
        int getElementValue();
        classElement * getNextElementObject();
        classElement * getPreviousElementObject();

        /* constructor */
        classElement();
};


#endif