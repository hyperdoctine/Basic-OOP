
#include "helpers.hpp"
#include "product.hpp"

// Data type changed: float by Product
class List
{
private:
    Product data[10];
    int counter;

public:
    List();
    void addElement(Product);
    Product removeElement(int);
    void printElements();
};