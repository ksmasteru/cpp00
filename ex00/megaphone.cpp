#include <iostream>
#include <string.h>
#include <cctype>

void    stringToUpper(std::string& word)
{
    int i;

    i = 0;
    while (word[i])
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] -= 32;
        i++; 
    }
}
int main(int ac, char **av)
{
    int i;
    std::string *upperWords;

    i = 1;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    try{
        upperWords = new std::string[ac];
    }
    catch (std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed!" << e.what() << std::endl;
        return (0);
    }
    while (i < ac)
    {
        upperWords[i] = av[i];
        stringToUpper(upperWords[i]);
        std::cout << upperWords[i];
        if (i++ < ac -1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}