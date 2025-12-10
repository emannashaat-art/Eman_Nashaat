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
void Postorder(Node* r) 
{
    if (r == NULL)
        return;

    Postorder(r->left);
    Postorder(r->right);
    cout << r->data << "\t";
}

Node* Search(Node* r, int key)
{
    if (r == NULL)
        return NULL;

    else if (r->data == key)
        return r;

    else if (key < r->data)
        return Search(r->left, key);

    else
        return Search(r->right, key);
}
// bool Search(int key){
//   Node* result = Search(root , key);
//   if (result == NULL){
//     return NULL ; 


//   }
// }
Node* Findmin(Node* r )
{
  if(r == NULL) 
    return NULL;
  else if(r -> left == NULL)
     return r; 
  else
  return Findmin(r -> left);

}
Node* Findmax(Node* r )
{
  if(r == NULL) 
    return NULL;
  else if(r -> right == NULL)
     return r; 
  else
     return Findmax(r -> right);

}


};
