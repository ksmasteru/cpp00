#include "PhoneBook.hpp"
#include "Utils.hpp"

PhoneBook::PhoneBook()
{
    contactsNumber = 0;
}

PhoneBook::~PhoneBook()
{
}

int PhoneBook::getContactsNumber() const
{
    return (this->contactsNumber);
}


void PhoneBook::addContact(Contact& newcontact)
{
    int contactnbr;

    if (this->getContactsNumber() < MAX_CONTACTS)
    {
        contactnbr = this->getContactsNumber();
        this->contactsNumber++;    
    }
    else
        contactnbr = MAX_CONTACTS;
    this->contacts[contactnbr].setFirstName(newcontact.getFirstName());
    this->contacts[contactnbr].setlastName(newcontact.getLastName());
    this->contacts[contactnbr].setnickName(newcontact.getNickname());
    this->contacts[contactnbr].setdarkestSecret(newcontact.getDarkestSecret());
    this->contacts[contactnbr].setPhoneNumber(newcontact.getPhoneNumber());
    std::cout << "the Contact has been added successfuly "<< "\U0001F600" << std::endl;
}

void    PhoneBook::search() const
{
    // TODO
}
