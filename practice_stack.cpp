#include <iostream>
#include <string>
#include <cstring>
#include "practice_stack.hpp"

template <class T>
void MyStack<T>::push(T elem) {
        if (top >= STACK_SIZE - 1)
        {
            printf("Stack overflow. Stack is full, push operation failed \n");
        } else
        {
            
            stack[++top] = elem;
            std::string s = std::to_string(elem);
            printf("Element %s was added to the stack successfully \n", s.c_str());
        }
    }

template <class T>
void MyStack<T>::pop() {
    T elem;
    if (top < 0)
    {
        printf("Stack undeflow. Nothing to pop.\n");
    } else
    {
        elem = stack[top--];
        std::string s = std::to_string(elem);
        printf("Element %s was removed from the stack. Current top element is at position %d. \n", s.c_str(), top + 1);
    }
    
}

template <class T>
bool MyStack<T>::isEmpty() {
    if (top < 0)
    {
        printf("The stack is empty. Current top postion is %d. \n", top + 1);
        return true;
    } else
    {
        printf("The stack is not empty. Current top position is %d. The stack size is %d. \n", top + 1, STACK_SIZE);
        return false;
    }
}

template <class T>
T MyStack<T>::peek() {
    T elem;
      if (top < 0)
    {
        printf("Stack undeflow.\n");
    } else
    {
        elem = stack[top];
        std::string s = std::to_string(elem);
        printf("top element is %s. Current top element is at position %d. \n", s.c_str(), top + 1);
    }
    return elem;
}

int main() {
    MyStack <int> s1;
    s1.push(9);
    s1.push(8);
    s1.isEmpty();
    s1.push(7);
    s1.pop();
    s1.peek();
    s1.pop();
    s1.pop();
    s1.isEmpty();
    return 0;
}
