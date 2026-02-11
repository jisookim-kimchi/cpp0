#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "./PhoneBook.hpp" 

class Controller
{
public:
    Controller();
    ~Controller();

    void run();

private:
    PhoneBook _phoneBook;
    void handleAdd();
    void handleSearch();
    //void handleExit();
};

#endif