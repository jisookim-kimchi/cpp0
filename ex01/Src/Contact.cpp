#include "../Header/Contact.hpp"
#include <iostream>

Contact::Contact()
    : _firstName(""),
      _lastName(""),
      _nickname(""),
      _phoneNumber(""),
      _darkSecret("")
{
  std::cout << "Contact Init" << std::endl;
}

Contact::~Contact()
{
  std::cout << "Contact Destroy" << std::endl;
}

void Contact::set_info(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
  _firstName = first;
  _lastName = last;
  _nickname = nick;
  _phoneNumber = phone;
  _darkSecret = secret;
}

const std::string &Contact::get_firstName() const
{
  return _firstName;
}

const std::string &Contact::get_lastName() const
{
  return _lastName;
}

const std::string &Contact::get_nickname() const
{
  return _nickname;
}

const std::string &Contact::get_phoneNumber() const
{
  return _phoneNumber;
}

const std::string &Contact::get_darkSecret() const
{
  return _darkSecret;
}