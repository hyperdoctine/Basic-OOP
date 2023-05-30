#include <iostream>
using namespace std;
#ifndef PRODUCT_HEADER
#define PRODUCT_HEADER

class Product
{
private:
    int id;
    string name;
    int quantity;
    float price;
public:
    Product();

    // EXTRA: MANY CONSTRUCTORS
    // It is not convenient that the user can change the ID.
    // Once it has been created, it can be restricted that this ID
    // can be modified via a constructor that accepts
    // the ID as a parameter instead of the setId method.
    // Note that there are TWO constructors; Each time the object
    // is built the user can only use one; The only way to tell
    // them apart is by the type of parameters. This new
    // constructor would be called like this: Product product(3);
    // That would mean that we assign to product the ID 3
    Product(int id);

    int getId();
    string getName();
    int getQuantity();
    float getPrice();

    void setName(string);
    void setQuantity(int);
    void setPrice(float);
};


#endif