#include <iostream>
using namespace std;
#ifndef BINARYTREE_H
#define BINARYTREE_H

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value);
};

class BinaryTree {
public:
    Node*root;
    
    BinaryTree();//constructor
    Node*insert(Node* node, int value);
    //void preorder(node* node);
};
#endif //BINARYTREE_H
