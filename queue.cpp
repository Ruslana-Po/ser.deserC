#include <iostream>
#include "../3 laba/queue.h"

int main(){
    Queue queue;
    queue.push("I");
    queue.push("B");
    queue.push("S");
    cout<<"Текст: "<<endl;
    queue.serializeText("file/queue.txt");
    Queue newQ;
    newQ.deserializeText("file/queue.txt");
    newQ.show();

    cout<<"Binar: "<<endl;
    queue.serializeBinary("file/queue.bin");
    Queue binQ;
    binQ.deserializeBinary("file/queue.bin");
    binQ.show();
}
