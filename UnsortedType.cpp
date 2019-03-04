#include "UnsortedType.hpp"


//    constructor
UnsortedType::UnsortedType (){
    length = 0;
    currentPos = -1;
}

bool UnsortedType::IsFull()  const{
    return length == MAX_ITEMS;
}
int UnsortedType::LengthIs()  const{
    return length;
}
/*
 IT IS UNCLEAR WHAT RetrieveItem should do. What item are we trying to retieve from the list?
 This function simply takes an item as a parameter and will update found as to whether
 the item exists or not.
 */
void UnsortedType::RetrieveItem(Book& item, bool& found ){
    found = false;
    for(int i = 0; i < length;i++)
        if(info[i].ComparedTo(item) == EQUAL){
            found = true;
            item = info[i];
        }
}
void UnsortedType::InsertItem(Book item ){
    int index;
    // if the list is not full and the item doesnt exist
    if(!IsFull() && !itemExists(item,index)){
        info[length] = item;
        length++;
    }
    else
        std::cout << "Insertion failed. List is full OR item already exists \n";
    
}
void UnsortedType::DeleteItem(Book item ){
    int index;
    
    if(itemExists(item,index)){
        for(int j = index; j < length-1; j++)
            info[j] = info[j+1];
        length--;
    }
}
void UnsortedType::ResetList (){
    length = 0;
    currentPos = -1;
}
void UnsortedType::GetNextItem(Book& item){
    currentPos++;
    item = info[currentPos];
}

bool UnsortedType::itemExists(const Book& item, int& index){
    for(int i = 0; i < length; i++)
        if(info[i].ComparedTo(item) == EQUAL){
            index = i;
            return true;
        }
    index = -1;
    return false;
}

// additional
// splits list into 2 with A containing all from publisher and B containing remainder
void  UnsortedType::Split (UnsortedType &A,  UnsortedType &B , std::string publisher){
    for(int i = 0; i < length; i++){
        if(info[i].getPublisher() == publisher)
            A.InsertItem(info[i]);
        else
            B.InsertItem(info[i]);
    }
}
// A will contain books who numCopies is < 10
void UnsortedType::Order (UnsortedType &A){
    for(int i = 0; i < length; i++)
        if(info[i].getNumCopies() <  10)
            A.InsertItem(info[i]);
}


