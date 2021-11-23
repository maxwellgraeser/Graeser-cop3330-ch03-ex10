#include "header.h"
/*
Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 4 5
 Read the operation into a string called operation and use an
if-statement to figure out which operation the user wants, for example,
if (operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings
*/

int main() {
    string op;
    double n1, n2;

    cout << "Enter an operand then two numbers: ";
    getline(cin, op, ' ');
    cin >> n1;
    cin >> n2;
    cout << n1 << " " << op << " " << n2 << " = " << calculate(op, n1, n2);

    return 0;
}