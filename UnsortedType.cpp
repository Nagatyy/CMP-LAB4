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
        currentPos++;
    }
    else
        std::cout << "Insertion failed. List is full OR item already exists \n";
    
}
void UnsortedType::DeleteItem(Book item ){
    int index;
    
    if(itemExists(item,index)){
        currentPos--;
        for(int j = index; j < length-1; j++)
            info[j] = info[j+1];
        length--;
    }
}
void UnsortedType::ResetList (){
    length = 0;
    currentPos = -1;
}
void UnsortedType::GetNextItem(Book& item ){
    item = info[currentPos];
    currentPos++;
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

