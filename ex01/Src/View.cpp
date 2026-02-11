#include "../Header/View.hpp"
#include <iostream>
#include <iomanip>

void View::displayError(const std::string& message)
{
    std::cout << message << std::endl;
}

std::string View::getprompt(const std::string& prompt)
{   
    std::string input;
    std::cout << prompt;
    if (!std::getline(std::cin, input))
    {
        return ("");
    }
    return (input);
}

void View::displaySummary(const PhoneBook& book)
{
    std::cout << "|" << std::setw(10) << "index"
              << "|" << std::setw(10) << "first name"
              << "|" << std::setw(10) << "last name"
              << "|" << std::setw(10) << "nickname" << "|" << std::endl;

    for (int i = 0; i < book.getSize(); i++)
    {
        const Contact& c = book.getContact(i);
        std::cout << "|" << std::setw(10) << i 
                  << "|" << std::setw(10) << View::formatField(c.getFirstName())
                  << "|" << std::setw(10) << View::formatField(c.getLastName())
                  << "|" << std::setw(10) << View::formatField(c.getNickname()) << "|" << std::endl;
    }
}

void View::displayContactDetails(const Contact& contact)
{   
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkSecret() << std::endl;
}

std::string View::formatField(const std::string& str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + '.';
    }
    return str;
}