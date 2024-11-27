#include <iostream>
#include "../3 laba/tree.h"

int main(){
   BinaryTree tree;
    tree.add(9);
   tree.add(7);
    tree.add(3);
    cout<<"Текст: "<<endl;
    tree.serializeText("file/tree.txt");
    BinaryTree newTree;
    newTree.deserializeText("file/tree.txt");
    newTree.print();

    cout<<"Binar: "<<endl;
    tree.serializeBinary("file/tree.bin");
    BinaryTree binTree;
    binTree.deserializeBinary("file/tree.bin");
    binTree.print();
}
