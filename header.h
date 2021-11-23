/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Maxwell Graeser
 */

#include <iostream>
#include <string>
using namespace std;

double calculate(string operand, double number1, double number2) {

    if (operand == "+" || operand == "plus") return number1 + number2;

    if (operand == "-" || operand == "minus") return number1 - number2;

    if (operand == "*" || operand == "mul") return number1 * number2;

    if (operand == "/" || operand == "div") return number1 / number2;

    return 0.0;
}