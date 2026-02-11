#include "./PhoneBook.hpp" 
#include "./View.hpp"

class Controller
{
public:
    Controller();
    ~Controller();

    void run();

private:
    PhoneBook _phoneBook;
    void handle_add();
    void handle_search();
    void handle_exit();
    View _view;
};