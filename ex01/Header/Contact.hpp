#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>


class Contact
{
public:
  Contact();
  Contact(const Contact &other);
  ~Contact();

  void setFirstName(const std::string &firstName);
  void setLastName(const std::string &lastName);
  void setNickname(const std::string &nickname);
  void setPhoneNumber(const std::string &phoneNumber);
  void setDarkSecret(const std::string &darkSecret);

  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickname() const;
  std::string getPhoneNumber() const;

  void displayContactInfo() const;

private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkSecret;
};

#endif