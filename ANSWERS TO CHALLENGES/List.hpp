
#include "helpers.hpp"
#include "product.hpp"

class List
{
private:
    Product data[10];
    int counter;

    // EXTRA: PRIVATE METHODS
    // Due to ID implementation
    // which is chosen by user and this ID must be unique
    // this method is now called every time a new element is added 
    // as additional verification
    // that's why it's private
    bool isTheNewIdAvailable(int); // If available returns true

public:
    List();
    void addElement(Product);
    Product removeElement(int);
    void printElements();
    void printElement(int);
};