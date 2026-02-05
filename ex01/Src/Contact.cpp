#include "../Header/Contact.hpp"
#include <iostream>

Contact::Contact()
    : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkSecret("")
{
  std::cout << "Contact initialized" << std::endl;
}

Contact::Contact(const Contact &other)
{
  std::cout << "Contact copied" << std::endl;
  _firstName = other._firstName;
  _lastName = other._lastName;
  _nickname = other._nickname;
  _phoneNumber = other._phoneNumber;
  _darkSecret = other._darkSecret;
}

Contact::~Contact()
{
  std::cout << "Contact destroyed" << std::endl;
}

void Contact::setFirstName(const std::string &firstName)
{
  this->_firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
  this->_lastName = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
  this->_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
  this->_phoneNumber = phoneNumber;
}

void Contact::setDarkSecret(const std::string &darkSecret)
{
  this->_darkSecret = darkSecret;
}

std::string Contact::getFirstName() const
{
  return _firstName;
}

std::string Contact::getLastName() const
{
  return _lastName;
}

std::string Contact::getNickname() const
{
  return _nickname;
}

std::string Contact::getPhoneNumber() const
{
  return _phoneNumber;
}

void Contact::displayContactInfo() const
{
  std::cout << "First Name: " << _firstName << std::endl;
  std::cout << "Last Name: " << _lastName << std::endl;
  std::cout << "Nickname: " << _nickname << std::endl;
  std::cout << "Phone Number: " << _phoneNumber << std::endl;
  std::cout << "Dark Secret: " << _darkSecret << std::endl;
}
