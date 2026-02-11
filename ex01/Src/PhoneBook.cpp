#include "../Header/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
    : _contacts(), _oldest_index(0), _size(0)
{
  std::cout << "PhoneBook Init" << std::endl;
}

PhoneBook::~PhoneBook()
{
  std::cout << "PhoneBook Destroy" << std::endl;
}

void PhoneBook::addContact(const Contact &contact)
{
  _contacts[_oldest_index] = contact;
  _oldest_index = (_oldest_index + 1) % 8;
  if (_size < 8)
    _size++;
}

const Contact &PhoneBook::getContact(int index) const
{
  if (index < 0 || index >= _size)
    std::cout << "index is not exist" << std::endl;
  return _contacts[index];
}

int PhoneBook::getSize() const
{
  return _size;
}