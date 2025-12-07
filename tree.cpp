#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node* left;
Node *right;
Node(int value)
{
    data  = value;
    left = right =  NULL ;

}
};
class BST 
{
public:
  Node* root;
  BST()
  {
    root = NULL;
  }

Node* Insert(Node* r,int item)
{
    if(r == NULL )
    {
        Node*  newnode = new Node(item);
        r = newnode;
    }
    else if(item <= r->data)
      r->left = Insert(r->left , item);
    else
       r->right = Insert(r->right , item);
    return;   
}
void Insert(int item)
{
    root=Insert(root , item);

}

   void preorder(Node* r){
  if(r==NULL)
   return;
  
   }
 
void Inorder(Node* r)
{
    if(r == NULL)
    return;
   Inorder(r->left);
   cout << r-> data <<"\t";
   Inorder(r->right);
}



};
