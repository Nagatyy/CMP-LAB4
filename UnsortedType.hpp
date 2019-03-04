
#ifndef UnsortedType_hpp
#define UnsortedType_hpp

#include <stdio.h>
#include "Book.hpp"
/* No Dynamic memory so no need for big 3 */

typedef Book ItemType;

class  UnsortedType    // declares a class data type
{
public :             //  8 public member functions
//    constructor
    UnsortedType () ;
    bool    IsFull()  const ;
    int     LengthIs()  const ;  // returns length of list
    void    RetrieveItem(Book&  item, bool&  found ) ;
    void    InsertItem(Book item ) ;
    void    DeleteItem(Book item ) ;
    void    ResetList();
    void    GetNextItem(Book& item);
    bool    itemExists(const Book&, int&);
    
//    additional
    void Split (UnsortedType &A,  UnsortedType &B , std::string publisher);
    void Order (UnsortedType &A);
    
private :                //  3 private data members
    int         length ;
    ItemType    info[MAX_ITEMS] ;
    int        currentPos ;
} ;


#endif /* UnsortedType_hpp */
