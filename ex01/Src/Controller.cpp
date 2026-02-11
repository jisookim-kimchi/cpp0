#include "../Header/Controller.hpp"
#include <iostream>

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
    
}

void Controller::handle_add()
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
    contact.set_info(fileds[0], fileds[1], fileds[2], fileds[3], fileds[4]);
    _phoneBook.addContact(contact);
}

void Controller::handle_search()
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

void Controller::handle_exit()
{

}
