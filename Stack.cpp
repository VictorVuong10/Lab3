//
// Created by Victor on 2019-01-22.
//

#include "Stack.hpp"

Stack::Stack() {
    currentTop = -1;
};

bool Stack::push(int toPush) {
    if (full())
        return false;
     onStack[++currentTop] = toPush;
     return true;
}

void Stack::pop() {
    if (!empty())
        --currentTop;
}

const int Stack::top() {
    return currentTop;
}

const bool Stack::empty() {
    return (currentTop == -1);
}

const bool Stack::full() {
    return (currentTop == 9);
}