//

// Created by Victor on 2019-01-22.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Stack.hpp"

TEST_CASE("A new stack is empty", "[Stack]")
{
    Stack tester;
    REQUIRE(tester.empty());
    REQUIRE(!tester.full());
}


Stack tester2{};
TEST_CASE("A new stack can push 10 times and the 11th time will be false", "[Stack]")
{

    for(int i =0; i < 10; ++i) {
        REQUIRE(tester2.push(i));
        REQUIRE(tester2.top() == i);
    }

    REQUIRE(!tester2.push(10));
}

TEST_CASE("Stack is full", "[Stack]")
{
    REQUIRE(!tester2.empty());
    REQUIRE(tester2.full());
}

TEST_CASE("pop out everything", "[Stack]")
{
    REQUIRE(tester2.full());
    for(int i =9; i <= 0; ++i) {
        REQUIRE(tester2.top() == i);
        tester2.pop();
        if (i!=0) {
            REQUIRE(!tester2.empty());
        } else {
            REQUIRE(tester2.empty());
        }
        REQUIRE(!tester2.full());
    }
}