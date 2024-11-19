#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
    
}

void    Contact::setFirstName(std::string name)
{
    this->firstName = name;
}

void    Contact::setlastName(std::string name)
{
    this->lastName = name;
}
void    Contact::setnickName(std::string nick)
{
    this->nickname = nick;
}

void    Contact::setPhoneNumber(std::string number)
{
    this->phoneNumber = number;
}

void    Contact::setdarkestSecret(std::string secret)
{
    this->darkestSecret = secret;
}

std::string Contact::getFirstName()
{
    return (this->firstName);
}

std::string Contact::getLastName()
{
    return (this->lastName);
}
std::string Contact::getNickname()
{
    return (this->nickname);
}
std::string Contact::getPhoneNumber()
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
    return (this->darkestSecret);
}