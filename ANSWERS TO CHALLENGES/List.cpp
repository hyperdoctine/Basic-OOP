#include "List.hpp"
#include <iostream>


// private method (Check the declaration for more details)
bool List::isTheNewIdAvailable(int id)
{
    for (int i = 0; i < this->counter; i++)
    {
        if(this->data[i].getId() == id)
            return false;
    }
    return true;
}

List::List()
{
    this->counter = 0;
}

void List::addElement(Product newElement)
{
    if (this->counter > 9)
        throw std::invalid_argument("The list is full");

    // ID check for availability
    if (this->isTheNewIdAvailable(newElement.getId()) == false)
        throw std::invalid_argument("ID repeats");
    
    this->data[this->counter] = newElement;
    this->counter+=1;
}

Product List::removeElement(int id)
{
    for (int i = 0; i < this->counter; i++)
    {
        if (this->data[i].getId() == id)
        {
            Product valueToRemove = this->data[i];
            for (int j = i; j < this->counter; j++)
            {
                this->data[j] = this->data[j+1];
            }
            this->counter--;
            return valueToRemove;
        }
    }
    cout << "Element not found\n";

    // Asigning -1 as an invalid ID
    // Via parameterized constructor 
    // (Check the Product implementation for more details)
    Product nullProduct(-1); 

    nullProduct.setQuantity(0);
    return nullProduct;
}


void List::printElements()
{
    for (int i = 0; i < this->counter; i++)
    {
        printMyElement(this->data[i]);
    }
}

void List::printElement(int id)
{
    for (int i = 0; i < this->counter; i++)
    {
        if (this->data[i].getId() == id)
        {
            printMyElement(this->data[i]);
            return;
        }
    }
    cout << "Element not found\n";
}



