// #include <iostream>
// using namespace std;

// struct node {
//     int data;
//     node* next;
// };

// class Stack {
// private:
//     node* top;  

// public:
//     Stack() {
//         top = NULL;
//     }

//     void push(int value) {
//         node* newnode = new node;
//         newnode->data = value;
//         newnode->next = top;
//         top = newnode;
//     }

//     int pop() {
//         if (top == NULL) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }

//         node* temp = top;
//         int val = temp->data;
//         top = top->next;
//         delete temp;
//         return val;
//     }

//     int peek() {
//         if (top == NULL) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }
//         return top->data;
//     }

//     bool isEmpty() {
//         return top == NULL;
//     }
// };




// class Queue {
// private:
//     node* frontPtr;
//     node* rearPtr;

// public:
//     Queue() {
//         frontPtr = rearPtr = NULL;
//     }

//     void enqueue(int value) {
//         node* newnode = new node;
//         newnode->data = value;
//         newnode->next = NULL;

//         if (rearPtr == NULL) {
//             frontPtr = rearPtr = newnode;
//             return;
//         }

//         rearPtr->next = newnode;
//         rearPtr = newnode;
//     }

//     int dequeue() {
//         if (frontPtr == NULL) {
//             cout << "Queue is empty!\n";
//             return -1;
//         }

//         node* temp = frontPtr;
//         int val = temp->data;

//         frontPtr = frontPtr->next;
//         if (frontPtr == NULL) {
//             rearPtr = NULL;
//         }

//         delete temp;
//         return val;
//     }

//     int front() {
//         if (frontPtr == NULL) {
//             cout << "Queue is empty!\n";
//             return -1;
//         }
//         return frontPtr->data;
//     }

//     bool isEmpty() {
//         return frontPtr == NULL;
//     }
// };



