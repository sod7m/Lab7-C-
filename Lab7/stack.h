#ifndef STACK_H
#define STACK_H

#include <stack>

class Stack {
private:
    std::stack<int> data;

public:
    void push(int value);
    int pop();
    bool isEmpty();
    size_t size(); // отримання розміру стеку
};

#endif

// (LIFO), що означає, що останній елемент, доданий до стеку, буде першим, що буде вилучено.