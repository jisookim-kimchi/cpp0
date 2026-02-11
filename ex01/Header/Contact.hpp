#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>


class Contact
{
public:
  Contact();
  ~Contact();

  void set_info(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
  const std::string &get_firstName() const;
  const std::string &get_lastName() const;
  const std::string &get_nickname() const;
  const std::string &get_phoneNumber() const;
  const std::string &get_darkSecret() const;

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkSecret;
};

#endif