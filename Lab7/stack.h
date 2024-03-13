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
    size_t size(); // ��������� ������ �����
};

#endif

// (LIFO), �� ������, �� ������� �������, ������� �� �����, ���� ������, �� ���� ��������.