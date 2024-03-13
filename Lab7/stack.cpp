#include "stack.h"

void Stack::push(int value) {
    data.push(value);
}

int Stack::pop() {
    int top = data.top();
    data.pop();
    return top;
}

bool Stack::isEmpty() {
    return data.empty();
}

size_t Stack::size() {
    return data.size();
}
