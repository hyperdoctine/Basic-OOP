
#include "product.hpp"

Product::Product()
{
}

// Second constructor (Check the declaration for more details)
Product::Product(int id)
{
    this->id = id;
}

int Product::getId()
{
    return this->id;
}

string Product::getName()
{
    return this->name;
}

float Product::getPrice()
{
    return this->price;
}

int Product::getQuantity()
{
    return this->quantity;
}

void Product::setName(string name)
{
    if (name == "")
        throw std::invalid_argument("Invalid blank product name");
    this->name = name;
}

void Product::setPrice(float price)
{
    this->price = price;
}

void Product::setQuantity(int quant)
{
    this->quantity = quant;
}


