/*
Menu-Driven Program

Task: Create a program that presents a menu to the user with options 
(e.g., 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Exit). 
The user selects an option and inputs two numbers, and the program performs the selected operation. 
The program should loop until the user selects "Exit."

Practice: Loops (for repeating the menu), conditionals (to check which option is selected), 
and basic arithmetic operations.
*/

#include <iostream>

int main()
{
    

    int operation = 0, userN1, userN2, result;
    

    do
    {
        std::cout << "\t\t\t======= Menu =======\n";
        std::cout << "\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Exit\n\n";
        std::cout << "Operation to be performed: ";
        std::cin >> operation;
        std::cout << "First number: ";
        std::cin >> userN1;
        std::cout << "Second number: ";
        std::cin >> userN2;

        switch(operation)
        {
            case 1:

        }
    } while (operation != 5);
    

    return 0;
}