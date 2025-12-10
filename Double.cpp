
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
};

class DoublyList {
public:
    node* head;

    DoublyList() {
        head = NULL;
    }

    void insertEmpty(int x) {
        node* newnode = new node;
        newnode->data = x;
        newnode->next = NULL;
        newnode->prev = NULL;
        head = newnode;
    }

    void insertBeginning(int x) {
        node* newnode = new node;
        newnode->data = x;
        newnode->prev = NULL;
        newnode->next = head;

        if (head != NULL)
            head->prev = newnode;

        head = newnode;
    }

    void insertEnd(int x) {
        node* newnode = new node;
        newnode->data = x;
        newnode->next = NULL;

        if (head == NULL) {
            newnode->prev = NULL;
            head = newnode;
            return;
        }

        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
    }

    void insertAtPosition(int x, int pos) {
        node* newnode = new node;
        newnode->data = x;

        node* temp = head;
        int count = 0;

        while (temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL) return;  

        newnode->next = temp->next;
        newnode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
