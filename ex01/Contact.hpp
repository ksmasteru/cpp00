#pragma once

#include <string>

class Contact{
  private:
    std::string firstName;
    std::string nickname;
    std::string lastName;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    Contact();
    ~Contact();
// Setters
    void    setFirstName(std::string name);
    void    setlastName(std::string name);
    void    setPhoneNumber(std::string number);
    void    setdarkestSecret(std::string secret);
    void    setnickName(std::string nick);
// Getters
    std::string getFirstName();
    std::string getLastName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    std::string getNickname();
};