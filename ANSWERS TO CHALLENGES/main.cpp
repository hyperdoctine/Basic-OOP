#include "helpers.hpp"
#include "List.hpp" 

int main()
{
    List list1;

    // Asigning 101 as ID
    // Via parameterized constructor 
    // (Check the Product declaration for more details)  
    Product product1(101);

    product1.setName("Lindor chocolate");
    product1.setQuantity(40);
    product1.setPrice(19.50);

    Product product2(102);
    product2.setName("Colombian coffee beans");
    product2.setQuantity(60);
    product2.setPrice(16.90);

    Product product3(103);
    product3.setName("Mocha cake");
    product3.setQuantity(14);
    product3.setPrice(24.00);

    Product product4(104);
    product4.setName("Truffles");
    product4.setQuantity(72);
    product4.setPrice(22.90);

    Product product5(105);
    product5.setName("Coffee cake");
    product5.setQuantity(23);
    product5.setPrice(24.00);

    Product product6(106);
    product6.setName("Sumatran coffee beans");
    product6.setQuantity(54);
    product6.setPrice(16.90);

    Product product7(107);
    product7.setName("Cocoa nibs");
    product7.setQuantity(72);
    product7.setPrice(25.99);

    list1.addElement(product1);
    list1.addElement(product2);
    list1.addElement(product3);
    list1.addElement(product4);
    list1.addElement(product5);
    list1.addElement(product6);
    list1.addElement(product7);

    // Testing removeElement method by the ID
    // 105 is the ID of product5
    Product removedElement = list1.removeElement(105); 
    cout << "\nTesting removeElement by ID: " << endl;
    // Must print the content of product5
    printMyElement(removedElement);

    // Testing printElement method by ID
    cout << "\nTesting printElement method: " << endl;
    list1.printElement(102); // Must print the content of product2
    
    cout << "\nAll content of list1: " << endl;
    list1.printElements();
    // Must print all items content except product5
    // Because was deleted

    return 0;
}