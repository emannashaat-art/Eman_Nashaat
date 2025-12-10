
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

node * endelement ;
endelement = head;
while (endelement->next != NULL){
    endelement = endelement -> next;

}
node * newnode ;
endelement = newnode;
newnode->next = NULL;
newnode->Data = x;

}

void add_at_speceficpoint(int value , int index){
    int c =0;
    node newnode;
    newnode.Data=value;
    node* x;
    x = head;
    while(x->next != NULL && index != c){
        x = x->next;
        c = c+1;
    }
    newnode.next = x->next;
    x->next = &newnode;
};

void addAfterValue(int searchValue, int newValue)
{
 node* newnode ;
   
    newnode->Data = newValue;
    node* x;
    x = head;

    while (x != NULL && x->Data != searchValue)
    {
        x = x->next;
    }

    newnode->next = x->next;
    x->next = newnode;
}
void delete_first() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node* temp = head;// امسك أول نود
    head = head->next;   // حرك الهيد للي بعده
    delete temp;         // امسح القديم
}
void delete_middle(int index) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (index == 0) {    // لو عايز تحذف أول عنصر
        delete_first();
        return;
    }

    node* curr = head;
    node* prev = NULL;
    int c = 0;

    while (curr != NULL && c < index) {
        prev = curr;
        curr = curr->next;
        c++;
    }

    if (curr == NULL) {
        cout << "Index out of range" << endl;
        return;
    }

    prev->next = curr->next;
    delete curr;
}
void delete_last() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL) { // لو في عنصر واحد بس
        delete head;
        head = NULL;
        return;
    }

    node* prev = NULL;
    node* curr = head;

    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;   // اقفل الليست قبل آخر نود
    delete curr;         // امسح آخر نود
}

};