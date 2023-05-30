#include "helpers.hpp"

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
    << myElement.getId() << "\t"    // Printing also the ID
    << addBlankSpaces(myElement.getName())
    << myElement.getQuantity() << "\t"
    << myElement.getPrice()
    << "\n";
}