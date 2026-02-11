#include "../Header/Controller.hpp"
#include <iostream>
#include "../Header/View.hpp"

Controller::Controller()
{
    std::cout << "Controller Construct" << std::endl;
}

Controller::~Controller()
{
    std::cout << "Controller Destroy" << std::endl;
}

void Controller::run()
{
    while (1)
    {
        std::string command = View::getInput("Prompt: ");
        if (command == "ADD")
        {
            handleAdd();
        }
        else if (command == "SEARCH")
        {
            handleSearch();
        }
        else if (command == "EXIT")
        {
            handleExit();
        }
        else
        {
            View::displayError("Invalid command");
        }
    }
}

void Controller::handleAdd()
{
    std::string fileds[5];
    std::string prompts[5] = {"First name : ", "Last name : ", "Nickname : ", "Phone number : ", "Darkest secret : "};
    for (int i = 0; i < 5; i++)
    {
        fileds[i] = View::getInput(prompts[i]);
        if (fileds[i].empty())
        {
            View::displayError("Invalid input");
            return;
        }
    }
    Contact contact;
    contact.setInfo(fileds[0], fileds[1], fileds[2], fileds[3], fileds[4]);
    _phoneBook.addContact(contact);
}

//todo : instead atoi what should i use???
void Controller::handleSearch()
{
    int size = _phoneBook.getSize();
    if (size == 0)
    {
        View::displayError("PhoneBook is empty");
        return;
    }
    std::string input = View::getInput("Search index: ");
    if (input.empty())
    {
        View::displayError("Invalid index");
        return;
    }
    int index = std::atoi(input.c_str());
    if (index >= 0 && index < size)
    {
        const Contact& contact = _phoneBook.getContact(index);
        View::displayFullDetails(contact);
    }
    else
    {
        View::displayError("Invalid index");
    }
}

void Controller::handleExit()
{

}
