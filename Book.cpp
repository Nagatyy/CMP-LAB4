#include "Book.hpp"

//    constructor
Book::Book(int isbn, std::string author, std::string title, float price,int numCopies,std::string publisher){
    this -> isbn = isbn;
    this -> author = author;
    this -> title = title;
    this -> price = price;
    this -> numCopies = numCopies;
    this -> publisher = publisher;
}
//    setters
// decrements the number of copies by count and returns the new numCopies
int Book::sellBook(int count){
    if(numCopies < count){
        std::cout << "There are not enough books to be sold..." << std::endl;
        exit(1);
    }
    numCopies -= count;
    
    return numCopies;
}
int Book::buyBook(int count){
    numCopies += count;
    return numCopies;
}
RelationType Book::ComparedTo(const Book& other)const{
    if(isbn < other.isbn)
        return LESS;
    else if(isbn == other.isbn)
        return EQUAL;
    else
        return GREATER;
    
}
void Book::print ()  const{
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "ISBN: " << isbn << "\n";
    std::cout << "Price: $" << price << "\n";
    std::cout << "Number of Copies: " << numCopies << "\n";
    std::cout << "Publisher: " << publisher << "\n";
}
//    getters
int Book::getISBN(){
    return isbn;
}
std::string Book::getAuthor(){
    return author;
}
std::string Book::getTitle(){
    return title;
}
float Book::getPrice(){
    return price;
}
int Book::getNumCopies(){
    return numCopies;
}
std::string Book::getPublisher(){
    return publisher;
}


