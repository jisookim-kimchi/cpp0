#include "../Header/PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
    : _contacts(), _isfull(false), _index(0), _count(0)
{
  std::cout << "PhoneBook initialized" << std::endl;
}

PhoneBook::~PhoneBook()
{
  std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::displayPhoneBook() const
{
  if (_count == 0)
  {
    std::cout << "PhoneBook is empty" << std::endl;
    return;
  }
  std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
            << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10)
            << "Nickname" << std::endl;

  std::cout << std::string(43, '-') << std::endl;
  for (int i = 0; i < _count; i++)
  {
    std::cout << std::setw(10) << i << "|" << std::setw(10)
              << _contacts[i].getFirstName() << "|" << std::setw(10)
              << _contacts[i].getLastName() << "|" << std::setw(10)
              << _contacts[i].getNickname() << std::endl;
    std::cout << std::string(43, '-') << std::endl;
  }
}

void PhoneBook::searchContact(int index) const
{
  if (index < 0 || index >= _count || !(std::isdigit(index)))
  {
    std::cout << "Invalid index" << std::endl;
    return;
  }
  _contacts[index].displayContactInfo();
}

void PhoneBook::addContact(const Contact &contact)
{
  _contacts[_index] = contact;
  _index = (_index + 1) % 8;
  if (_count < 8)
    _count++;
}