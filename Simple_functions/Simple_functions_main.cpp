#include "Simple_functions.h"

int main()
{

    //Temperature Conversion Functions
    int operation = 0;
    do
    {
        operation = AskUserOperation();
    }
    while (operation != 1 && operation != 2);    
     
    float temp = 0.0;
    temp = AskUserTemp();
    switch (operation)
    {
        case 1:
        std::cout << "The temperature in Celsius: " << FahrToCels(temp) << std::endl;
        break;
        default:
        std::cout << "The temperature in Fahrenheit: " << CelsToFahr(temp) << std::endl;
        break;        
    }


    return 0;
}