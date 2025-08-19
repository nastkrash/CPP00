#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>


PhoneBook::PhoneBook() : nextIndex(0), totalContacts(0) {}
PhoneBook::~PhoneBook(){}

void PhoneBook::add_contact()
{
    contacts[nextIndex].setContact();
    if (!contacts[nextIndex].isValid())
    {
        std::cout << "Can't be empty" << std::endl;
        return ;
    }
    nextIndex = (nextIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
    std::cout << "Contact added" << std::endl;
}

void PhoneBook::search_contact()
{
    if (totalContacts == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "id" << "|"
            << std::setw(10) << "First name" << "|"
            << std::setw(10) << "Last name" << "|"
            << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < totalContacts; i++)
        contacts[i].printContact(i);
    std::cout << "Enter index to view full info: ";
    
    int id;
    if(!(std::cin >> id) || id <0 || id >= totalContacts)
    {
        std::cout << "Invalid index." << std::endl;
        std::cin.clear(); // reset the fail state
        std::cin.ignore(1000, '\n'); // remove the bad input from the buffer
        /*Ignores up to 1000 characters in the buffer until it reaches a newline*/
        return ;
    }
    std::cin.ignore(); // clear newline
    contacts[id].printFullContact();
}
