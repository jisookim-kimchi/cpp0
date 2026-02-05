#include "../Header/Contact.hpp"
#include "../Header/PhoneBook.hpp"
#include <cctype>
#include <iostream>
#include <limits>

Contact createContact()
{
  Contact contact;
  std::string input;

  std::cout << "First Name : ";
  std::cin >> input;
  contact.setFirstName(input);

  std::cout << "Last Name : ";
  std::cin >> input;
  contact.setLastName(input);

  std::cout << "Nickname : ";
  std::cin >> input;
  contact.setNickname(input);

  std::cout << "Phone Number : ";
  std::cin >> input;
  contact.setPhoneNumber(input);

  std::cout << "Dark Secret : ";
  std::cin >> input;
  contact.setDarkSecret(input);

  return contact;
}

// int main()
// {
//   PhoneBook phoneBook;
//   std::string command;
//   int index;

//   while (1)
//   {
//     std::cout << "Enter Command (ADD, SEARCH, EXIT) : ";
//     if (!(std::cin >> command))
//     {
//       break;
//     }

//     if (command == "ADD")
//     {
//       Contact contact = createContact();
//       phoneBook.addContact(contact);
//     }
//     else if (command == "SEARCH")
//     {
//       phoneBook.displayPhoneBook();

//       std::cout << "Enter index to search : ";
//       if (!(std::cin >> index))
//       {
//         std::cout << "Invalid index input!" << std::endl;
//         std::cin.clear();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         continue;
//       }
//       phoneBook.searchContact(index);
//     }
//     else if (command == "EXIT")
//     {
//       std::cout << "Close the PhoneBook" << std::endl;
//       break;
//     }
//     else
//     {
//       std::cout << "Invalid command" << std::endl;
//       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     }
//   }
//   return 0;
// }

int main()
{
    Contact contact;
    return 0;
}