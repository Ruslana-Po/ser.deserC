#include <iostream>
#include "../3 laba/list.h"

int main(){
    LinkedList list;
    list.AddToEnd("A");
    list.AddToEnd("B");
    list.AddToEnd("C");

    cout<<"Текст: "<<endl;
    list.serializeText("file/list.txt");
    LinkedList newList;
    newList.deserializeText("file/list.txt");
    newList.PrintNode();
    cout<<"Бинар: "<<endl;
    list.serializeBinary("file/list.bin");
    LinkedList binList;
    binList.deserializeBinary("file/list.bin");
    binList.PrintNode();

    return 0;

}
