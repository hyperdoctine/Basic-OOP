#include "helpers.hpp"

// Many changes
string addBlankSpaces(string word)
{
    for (int i = word.length(); i < 25; i++)
    {
        word.append(" ");
    }
    return word;
}

void printMyElement(Product myElement)
{
    std::cout 
    << addBlankSpaces(myElement.name)
    << myElement.quantity << "\t"
    << myElement.price 
    << "\n";
}