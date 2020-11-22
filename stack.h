#ifndef STACK_H
#define STACK_H
#include "element.h"

class stack{
    private:
        int size;
        classElement * topElement;

    public:
        stack();

        void push(int value);
        int pop();
};

#endif
