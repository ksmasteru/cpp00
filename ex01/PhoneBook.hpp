#pragma once
#define MAX_CONTACTS 7
#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        int contactsNumber;
        Contact contacts[MAX_CONTACTS + 1];
    public:
        PhoneBook();
        ~PhoneBook();
        void    search() const;
        int     getContactsNumber() const;
        void    addContact(Contact& newcontact);
};
