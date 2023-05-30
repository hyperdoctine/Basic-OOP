#include "helpers.hpp"
#include "List.hpp" 

// Changed: The way to call the items
int main()
{
    List list1;
    
    Product product1;
    product1.name="Lindor chocolate";
    product1.quantity = 40;
    product1.price = 19.50;

    Product product2;
    product2.name = "Colombian coffee beans";
    product2.quantity = 60;
    product2.price = 16.90;

    Product product3;
    product3.name = "Mocha cake";
    product3.quantity = 14;
    product3.price = 24.00;

    Product product4;
    product4.name = "Truffles";
    product4.quantity = 72;
    product4.price = 22.90;

    Product product5;
    product5.name = "Coffee cake";
    product5.quantity = 23;
    product5.price = 24.00;

    Product product6;
    product6.name = "Sumatran coffee beans";
    product6.quantity = 54;
    product6.price = 16.90;

    Product product7;
    product7.name = "Cocoa nibs";
    product7.quantity = 72;
    product7.price = 25.99;

    list1.addElement(product1);
    list1.addElement(product2);
    list1.addElement(product3);
    list1.addElement(product4);
    list1.addElement(product5);
    list1.addElement(product6);
    list1.addElement(product7);

    list1.printElements();

    return 0;
}