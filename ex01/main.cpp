#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <csignal>
#include <unistd.h>
#include "Utils.hpp"

void     fill_contact(Contact& contact)
{
    contact.setFirstName(getUserInput("please enter your firstName"));
    contact.setlastName(getUserInput("please enter your lastName"));
    contact.setnickName(getUserInput("please provide your nickname"));
    contact.setPhoneNumber(getUserInput("please provide your phoneNUmber"));
    contact.setdarkestSecret(getUserInput("please type in your darkest secret"));
}

int main()
{
    PhoneBook phoneBook;
    Contact contact;
    std::string command;
    std::cout << "Please enter a Command : ADD SEARCH EXIT" << std::endl;
    while (std::getline(std::cin, command))
    {
        if (command.compare("ADD") == 0)
        {
            fill_contact(contact);
            phoneBook.addContact(contact);
        }
        else if (command.compare("SEARCH") == 0)
            phoneBook.search();
        else if (command.compare("EXIT") == 0)
            return (0);
        command.clear();
        std::cout << "Please enter a Command : ADD SEARCH EXIT" << std::endl;
    }
    return (0);
}
