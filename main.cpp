#include <iostream>
#include "Hashtable.h"



int main()
{
    Hashtable hashtable;


    assert(hashtable.isEmpty() == true);


    hashtable.insertItem(1, "One");
    hashtable.insertItem(2, "Two");
    hashtable.insertItem(3, "Three");
    assert(hashtable.isEmpty() == false);

    // Test printable() function
    hashtable.printable();


    hashtable.removeItem(2);
    hashtable.removeItem(4);


    hashtable.printable();

    return 0;
}