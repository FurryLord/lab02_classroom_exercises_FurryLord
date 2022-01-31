#pragma once // Prevents multiple definitions

#include "ex01.hpp"
#include "ex02.hpp"

// Exercise 0a: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 0b: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// Implementations
// Exercise 0a: implements function 'add', that adds two numbers
int add (int a, int b) {
    return a + b;
}

// Exercise 0b: implements function 'mul', that multiplies two numbers
int mul (int a, int b) {
    return a * b;
}
