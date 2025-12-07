
#include<iostream>
using namespace std;


struct node{

        int Data;
        node * next ;
      
    };

class linkedlist{
   node *head ;
    
    linkedlist(){

    
  head = NULL;


}

void add_start(int x){

if (head == NULL){ 
    node newnode;
    head = &newnode;
    newnode.Data = x;
    newnode.next = NULL;

}else{
  node newnode;  
 newnode.Data = x;
 newnode.next = head;
 head = &newnode;
}
}
void add_end(int x){

node  endelement ;
endelement = head;
while (endelement.next != NULL){
    endelement = element.next;

}
node  newnode ;
endelement = &newnode;
newnode.next = NULL;
newnode.Data = x;

}

void add_at_speceficpoint(int value , int index){
    int c =0;
    node newnode;
    newnode.Data=value;
    node* x;
    x = head;
    while(x->next != NULL && index != c){
        x = x.next;
        c = c+1;
    }
    newnode.next = x.next;
    x.next = &newnode;
};

void addAfterValue(int searchValue, int newValue)
{
 node* newnode ;
   
    newnode.Data = newValue;
    node* x;
    x = head;

    while (x != NULL && x->Data != searchValue)
    {
        x = x.next;
    }

    newnode.next = x.next;
    x.next = &newnode;
}

};