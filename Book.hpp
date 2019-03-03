#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>
#include <iostream>
// using strings instead of character array -> no need for a copy constructor or destructor or = operator

const  int  MAX_ITEMS = 50 ;
enum  RelationType { LESS, EQUAL, GREATER } ;

class  Book        // declares class data type
{
public:             //  3 public member functions
    
//    constructor with default parameters
    Book(int a = 0, std::string b = "", std::string c = "", float d = 0,int e = 1,std::string f = "");
//    setters
    int sellBook(int cout); //decrements the number of copies
    int buyBook(int count); //increments the number of copies
    RelationType ComparedTo (const Book& )const; //Compare with   ISBN
    void print ()  const ; //prints book info
//    getters
    int getISBN();
    std::string getAuthor();
    std::string getTitle();
    float getPrice();
    int getNumCopies();
    std::string getPublisher();

private:
    int    isbn;
    std::string  author;
    std::string   title;
    float   price;
    int numCopies;
    std::string publisher;
} ;


#endif /* Book_hpp */
