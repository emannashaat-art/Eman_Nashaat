
// #include <iostream>
// using namespace std;
// #define size 10;
// int stack { 
// int top = -1;
// }
// class stack{
// int arr[size] ; 

//  int push(int x ){
//  if top >= size-1;
// //  return -1 ;
// cout <<"fulllll";
//  }
//  else{
//   ++top;
//   arr [++top] =x ;
//   // return arr[top];
//  }

// int pop (){
//  if(top < o){ //هنا بشوف هو فاضي ولا لا 
//     cout<<"stack is empty";
// }
// else{
//   cout<< arr[top --]; // عشان ياخد قيمه التوب ويقللها 
// }
// }
// int print_topvalue(){
//     return arr[top];  
// }



//  }
// class queue{



//   }

// int main(){
// stack s1 ;
// s1.push{5} ; 
// s1.push{1} ; 
// s1.push{3} ; 
// s1.push{4} ; 
// s1.push{6} ; 

// si.top{};

// return 0;
// }
  
// class queue{
//   int a[6] ;
//    int rear;
//    int front;
//   int enqueue {int x}{
//    front =-1;
//    rear = 0; 
//   }
//   int dequeue
// }


// tring infixToPostfix(string in) {
//     string post = "";

//     for (int i = 0; i < in.size(); i++) {
//         char c = in[i];

//         if (isdigit(c)) {
//             post += c;
//             post += ' ';
//         }
//         else if (c == '(') {
//             pushOp(c);
//         }
//         else if (c == ')') {
//             while (!isEmptyOp() && peekOp() != '(') {
//                 post += popOp();
//                 post += ' ';
//             }
//             if (!isEmptyOp()) popOp();
//         }
//         else if (isOp(c)) {
//             while (!isEmptyOp() && prec(peekOp()) >= prec(c)) {
//                 post += popOp();
//                 post += ' ';
//             }
//             pushOp(c);
//         }
//     }

//     while (!isEmptyOp()) {
//         post += popOp();
//         post += ' ';
//     }

//     return post;
// }

// int evaluatePostfix(string p) {
//     for (int i = 0; i < p.size(); i++) {
//         char c = p[i];

//         if (isdigit(c)) {
//             pushNum(c - '0');
//         }
//         else if (isOp(c)) {
//             int b = popNum();
//             int a = popNum();

//             int r = 0;
//             if (c == '+') r = a + b;
//             else if (c == '-') r = a - b;
//             else if (c == '*') r = a * b;
//             else if (c == '/') r = a / b;

//             pushNum(r);
//         }
//     }
//     return popNum();
// }

// int main() {
//     string infix;
//     cout << "Enter infix: ";
//     cin >> infix;

//     string post = infixToPostfix(infix);
//     cout << "Postfix = " << post << endl;

//     int result = evaluatePostfix(post);
//     cout << "Result = " << result << endl;