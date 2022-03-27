/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

using namespace std;

int Square(int x);

int Cube(int x);

int main()
{
    int num = 10;

    cout << "Cube : " << Cube(num) << "\n" << "Square : " << Square(num) << endl;
}

int Cube(int x) {
    return x * x;
}

int Square(int x) {
    return x * x * x;
}

