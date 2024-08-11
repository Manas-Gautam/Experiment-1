//Name: - Manas Gautam
//PRN: - 23070123081
//Branch: - E&Tc{B1}

//Hello World
#include<iostream> // 1: Includes the iostream library which is necessary for input and output operations. `iostream` provides access to `std::cout` for outputting text to the console.

int main() // 2: Defines the main function where the execution of the program begins. `int` specifies that the function will return an integer value, typically used to indicate the status of program execution.
{ // 3: Opening brace `{` marks the beginning of the main function's body.

    std::cout << "hello world"; // 4: Uses the `std::cout` object to output the string "hello world" to the console. `<<` is the insertion operator that sends the string to the output stream.

    return 0; // 5: Returns the value `0` to the operating system. In C++, returning `0` generally indicates that the program has executed successfully without errors.

} // 6: Closing brace `}` marks the end of the main function's body.

//Calculator
#include <iostream>

int main() {
    // Variables to store user input
    double num1, num2;
    char operation;
    
    // Prompt the user for input
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    
    // Perform the calculation based on the user's choice
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operation!" << std::endl;
            break;
    }
    
    return 0;
}
