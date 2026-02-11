#include "../Header/View.hpp"
#include <iostream>

void View::displayError(const std::string& message)
{
    std::cout << message << std::endl;
}

std::string View::getInput(const std::string& prompt)
{
    std::string input;
    std::cout << prompt;
    
    
    return (input);
}

