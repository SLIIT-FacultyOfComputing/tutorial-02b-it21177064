/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;
    cout << "\nMultiplication table of the given number.\n" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}
