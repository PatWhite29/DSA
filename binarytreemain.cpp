#include <iostream>
#include "BINARYTREE.H"
using namespace std;

int main(){
    BinaryTree tree;
    tree.root = tree.insert(tree.root,50);
    tree.root = tree.insert(tree.root,30);
    tree.root = tree.insert(tree.root,70);
    return 0;
}
