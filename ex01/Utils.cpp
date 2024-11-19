#include "Utils.hpp"
#include <csignal>

void    handle_SIGQUIT(int sig)
{
    if (sig == SIGQUIT)
    {
        std::cout << "closing.." << std::endl;
        exit (1);
    }
    exit(1);
}
// return true if a given string only containts space chars
bool    is_empty(std::string& str)
{
    int i;

    if (str.size() == 0)
        return (true);
    i = 0;
    while (str[i])
    {
        if (!std::isspace(str[i]))
            return false;
        i++;
    }
    return (true);
}

std::string getUserInput(const char *str)
{
    std::string input;
    std::cout << str << std::endl;
    while (std::getline(std::cin, input))
    {
        if (!is_empty(input))
            break;
        std::cout << str << std::endl;
    }
    if (std::cin.fail()) //try close and reopening std::cin
    {
        std::cerr << "standard input failed! exiting..." << std::endl;
        exit(1);
    }
    return (input);
}