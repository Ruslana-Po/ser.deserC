#include <iostream>
#include "../3 laba/twolist.h"
int main(){
    DoublyLinkedList list;
    list.AddToEnd("A");
    list.AddToEnd("B");
    list.AddToEnd("C");

    cout<<"Текст: "<<endl;
    list.serializeText("file/listtwo.txt");
    DoublyLinkedList newList;
    newList.deserializeText("file/listtwo.txt");
    newList.PrintNode();
    cout<<"Бинар: "<<endl;
    list.serializeBinary("file/listtwo.bin");
    DoublyLinkedList binList;
    binList.deserializeBinary("file/listtwo.bin");
    binList.PrintNode();

    return 0;

}
