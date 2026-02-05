#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void addContact(const Contact &contact);
    void displayPhoneBook() const;
    void searchContact(int index) const;

private:
    Contact _contacts[8];
    bool _isfull;
    int _index;
    int _count;
};
