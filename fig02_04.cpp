// fig02_04.cpp
// Addition program that displays the sum of 2 integers
#include <iostream>

int main() {
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)
    int number2{0}; // second integer to add (initialized to 0)
    int sum{0}; // sum of number1 and number2 (initialized to 0)
    
    std::cout << "Enter the first integer: "; // prompt user for data
    std::cin >> number1; // read the first integer from user into number1

    std::cout << "Enter the second integer: "; // prompt user for data
    std::cin >> number2; // read the second integer from user into number2

    sum = number1 + number2; // add the numbers, store the result in sum

    std::cout << "Sum is " << sum << std::endl; // display sum, end line
} 
// do my new creds work?