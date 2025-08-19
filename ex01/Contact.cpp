#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib> // for std::exit

Contact::Contact(){}
Contact::~Contact(){}

std::string safeGetline() 
{
    std::string input;
    if (!std::getline(std::cin, input)) 
    {
        std::cout << "\nEOF detected. Exiting...\n";
        std::exit(0);
    }
    return input;
}

void Contact::setContact()
{
    std::cout << "First name: ";
    firstName = safeGetline();
    std::cout << "Last name: ";
    lastName = safeGetline();
    std::cout << "Nickname: ";
    nickname = safeGetline();
    std::cout << "Phone number: ";
    phoneNumber = safeGetline();
    std::cout << "Darkest secret: ";
    darkestSecret = safeGetline();
}


void printFormatted(const std::string& str) {
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
}

void Contact::printContact(int index)  
{
    std::cout << std::setw(10) << index << "|";
    // It tells the output stream (like std::cout) to use a minimum width 
    // of 10 characters when displaying the following value.
    printFormatted(firstName); std::cout << "|";
    printFormatted(lastName); std::cout << "|";
    printFormatted(nickname); std::cout << std::endl;
}

void Contact::printFullContact()
{
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number : " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

bool Contact::isValid()
{
    return  !firstName.empty() && !lastName.empty() && !nickname.empty() && 
            !phoneNumber.empty() && !darkestSecret.empty();
}
