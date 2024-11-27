#include <iostream>
#include "../3 laba/arr.h"

int main(){
    DynamicArray arr;
    arr.AddArr("H");
    arr.AddArr("I");
    arr.AddArr("!");
    cout<<"Текст: "<<endl;
    arr.serializeText("file/arr.txt");
    DynamicArray newArr;
    newArr.deserializeText("file/arr.txt");
    newArr.Print();
    cout<<"Binar: "<<endl;
    arr.serializeBinary("file/arr.bin");
    DynamicArray binArr;
    binArr.deserializeBinary("file/arr.bin");
    binArr.Print();
}
