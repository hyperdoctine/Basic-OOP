#include "List.hpp"
#include <iostream>

List::List()
{
    this->counter = 0;
}

void List::addElement(float newElement)
{
    if (this->counter > 9)
        throw std::invalid_argument("The list is full");
    
    this->data[this->counter] = newElement;
    this->counter+=1;
}

float List::removeElement(int position)
{
    float elementToRemove = this->data[position];

    for (int i = position; i < this->counter; i++)
    {
        this->data[i] = this->data[i+1];
    }
    
    this->counter-=1;

    return elementToRemove;
}


void List::printElements()
{
    for (int i = 0; i < this->counter; i++)
    {
        printMyElement(this->data[i]);
    }
    
}



