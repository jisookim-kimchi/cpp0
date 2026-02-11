#ifndef VIEW_HPP
# define VIEW_HPP

# include <string>
# include "Contact.hpp"
# include "PhoneBook.hpp"
class View
{
public:
    static void displayError(const std::string& message);
    static void displayFullDetails(const Contact& contact);
    static std::string getInput(const std::string& prompt);
    static void displaySummaryTable(const PhoneBook& book);

private:
    static std::string formatField(const std::string& field);
};
#endif