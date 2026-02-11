#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();
    void addContact(const Contact &contact);
    const Contact &getContact(int index) const;
    int getSize() const;

private:
    Contact _contacts[8];
    int _oldest_index;
    int _size;
};

#endif
