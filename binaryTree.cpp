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

        BinaryTree()
        {
            ROOT = nullptr; // initializing root to null
        }

        void insert()
        {
            int x;
            cout <<"masukkan nilai: ";
            cin >> x;

            // step 1 allocate memory fot the new node
            Node *newNode = new Node();

            // step 2 :assign value to the data field of new node

            newNode->info = x;
            // step 3: make the left and right child of the new node point
            newNode->leftchild = nullptr;
            newNode->rightchild = nullptr;

            //step 4 locate the node which will be the parent of the node to be
            Node *parent =nullptr;
            Node *currentNOde =nullptr;
            search(x, parent, currentNOde);

            //step 5 if parent is null (tree is empty)

            if (parent == nullptr)
            {
                //5a mark the new node as root
                ROOT = newNode;
                //5b exit
                return;
            }

            //step 5 if the value in the data field of new node is less than that of parent

            if(x < parent ->info)
            {
                //6a make the left child of parent point to the new node
                parent->leftchild = newNode;
                //6b exit
                return;
            }
            // step 7 id the value in the data field of the new node is greater tha that of the parent
            else if(x > parent->info)
            {
                //7a make the ringht child of parent point to the new node
                parent->rightchild=newNode;
                //7b exit
                return;
            }

        }
        void search (int element, Node *parent, Node *&currentNOde)
        {
            // this function searche the curret node the specified node 
            currentNOde = ROOT;
            parent = nullptr;
            while ((currentNOde != nullptr) &&(currentNOde->info != element))
            {
                parent = currentNOde;
                if(element < currentNOde->info)
                    currentNOde = currentNOde->leftchild;
                else 
                currentNOde = currentNOde->rightchild;
            }

        };
        void inorder(Node *ptr){
            if(isEmpty()){
                cout << "There Is Empty" << endl;
                return;
            }
            if(ptr == nullptr){
                return;
            }

            inorder(ptr->leftchild);
            cout << ptr-> info << " ";
            inorder(ptr->rightchild);
        };

        void preorder(Node *ptr){
            if(isEmpty()){
                cout << "Three is empty" << endl;
                return;
            }
            if(ptr == nullptr){
                return;
            }
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }

        void postorder(Node *ptr){
            if(isEmpty()){
                cout << "Three is empty" << endl;
                return;
            }
            if (ptr == nullptr){
                return;
            }
        }

       
        

   }

}