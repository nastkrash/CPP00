#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phoneBook;
    std::cout << "Welcome to my PhoneBook!" << std::endl;
    std::string command;
    while(true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) 
        {
            std::cout << "\nEOF detected. Exiting...\n";
            break;
        }

        if(command == "ADD")
            phoneBook.add_contact();
        else if (command == "SEARCH")
            phoneBook.search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Unknown command." << std::endl;
    }
    return 0;
}
