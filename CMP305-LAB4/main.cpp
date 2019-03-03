#include <iostream>
#include "UnsortedType.hpp"

int main() {
    UnsortedType list;
    
    Book book1;
    Book book2(123);
    

    int temp;
    
    list.InsertItem(book1);
    list.InsertItem(book2);

    
    list.itemExists(book2, temp);
    
    std::cout << temp;

    return 0;
}
