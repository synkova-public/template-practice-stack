#include <iostream>
#include <string>
#include <cstring>

template <class T>
class MyStack {
    private:
    const static int STACK_SIZE = 2;
    int top = -1;
    T stack[STACK_SIZE] = {};
    

    public:
    void push(T elem);
    void pop();
    bool isEmpty();
    T peek();
};