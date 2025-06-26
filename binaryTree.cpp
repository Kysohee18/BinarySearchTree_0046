#include <iostream>
using namespace std;

//BinarySearchTree_0046

class Node 
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    //contructor for the node class
    Node()
    {
        leftchild = nullptr; //initialize leftchild to null
        rightchild = nullptr;
    }

};

class BinaryTree
{
    public:
        Node *ROOT;

}