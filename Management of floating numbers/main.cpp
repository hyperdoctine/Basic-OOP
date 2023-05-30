#include "helpers.hpp"
#include "List.hpp"

int main()
{
    List list1;
    list1.addElement(0.0);
    list1.addElement(0.1);
    list1.addElement(0.2);
    list1.addElement(3.3);
    list1.addElement(4.4);
    list1.addElement(5.5);
    list1.addElement(6.6);

    list1.removeElement(2);
    
    list1.printElements();

    return 0;
}