//
// Created by Victor on 2019-01-22.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP


class Stack {

    private:
        static constexpr int MAX = 10;
        int currentTop;
        int onStack[MAX];
    public:
        Stack();
        bool push(int toPush);
        void pop();
        const int top();
        const bool empty();
        const bool full();


};


#endif //LAB3_STACK_HPP
