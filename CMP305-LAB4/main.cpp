#include <iostream>
#include "UnsortedType.hpp"
#include <iomanip>

void printLib(UnsortedType&);


// main for exc 3
int main() {

    UnsortedType list;
    Book book1(100001, "James Clear", "Atomic Habits", 30.99 , 50 , "Penguin Publishing");
    Book book2(100002, "Paul Kalinithi", "When Breath Comes", 29.99 , 8 , "Dolphin Publishing");
    Book book3(100003, "Yuval Noah Harari", "Sapiens: A Brief History", 19.99 , 7 , "Zebra Publishing");
    Book book4(100004, "Jon Krakauer", "Into Thin Air", 41.01 , 5 , "Lion Publishing");
    Book book5(100005, "Richard P. Feynman", "Surely You’re Joking", 31.99 , 15 , "Ant Publishing");
    Book book6(100006, "Jared Diamond", "Guns, Germs, and Steel", 35.99 , 18 , "Rhinoceros Pubs");
    Book book7(100007, "Epictetus", "Manual for Living", 3.99 , 21 , "Trump Publishing");
    Book book8(100008, "Robert Cialdini", "Influence: The Psychology of Persuasion", 22.00 , 45 , "Spider Publishing");
    Book book9(100009, "Marcus Aurelius", "Meditations", 49.99 , 32 , "Koala Publishing");

    list.InsertItem(book1);
    list.InsertItem(book2);
    list.InsertItem(book3);
    list.InsertItem(book4);
    list.InsertItem(book5);
    list.InsertItem(book6);
    list.InsertItem(book7);
    list.InsertItem(book8);
    list.InsertItem(book9);


    printLib(list);

    return 0;
}

void printLib(UnsortedType & lib){
    Book temp;
    for(int i = 0; i < lib.LengthIs(); i++){
        lib.GetNextItem(temp);
        std::cout << "+----------------------------+" << std::endl;
        std::cout << "|Book " << i+1 << std::setw(24)<< "|\n";
        std::cout << "+----------------------------+" << std::endl;
        temp.print();
    }
    
}
