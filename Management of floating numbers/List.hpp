
#include "helpers.hpp"

class List
{
private:
    float data[10];
    int counter;

public:
    List();
    void addElement(float);
    float removeElement(int);
    void printElements();
};