// fig02_05.cpp
// comparing integers using if statements, relational operators
// and equality operators
#include <iostream> // enables program to perform input and output

using std::cout;
using std::cin;
using std::endl;

// function main
int main() {
    int number1{0};
    int number2{0};

    cout << "Enter two integers to compare: ";
    cin  >> number1 >> number2; // read two integers from user

    if (number1 == number2) {
        cout << number1 << " == " << number2 << endl;
    }

    if (number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }

    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }
} // end main function