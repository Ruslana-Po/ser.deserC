#include <iostream>
#include "../3 laba/stack.h"

int main(){
    Stack stack;
    stack.push("I");
    stack.push("B");
    stack.push("C");
    cout<<"Текст: "<<endl;
    stack.serializeText("file/stack.txt");
    Stack newStack;
    newStack.deserializeText("file/stack.txt");
    newStack.show();

    cout<<"Binar: "<<endl;
    stack.serializeBinary("file/stack.bin");
    Stack binStack;
    binStack.deserializeBinary("file/stack.bin");
    binStack.show();
}
