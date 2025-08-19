#include <iostream>

void print_arg(char* arg)
{
    int i = 0;
    while (arg[i] != '\0')
    {
        if(std::isalpha(arg[i]))
            std::cout << (char)std::toupper(arg[i]);
        else
            std::cout << arg[i];
        i++;
    }
}

int main(int argc, char** argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int i = 1;
        while(argv[i] != NULL)
        {
            print_arg(argv[i]);
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}
