
// Check Whether Number is Even or Odd using if else
// example 1
// #include <iostream>
// using namespace std;

// int main() {
// int num;

//   cout << "Enter an integer: ";
//   cin >> num;

//   if ( num % 2 == 0)
//     cout << num << " is even.";
//   else
//     cout << num << " is odd.";

//   return 0;
// }

//  Program to Add Two Integers
// Example 2
// #include <iostream>
// using namespace std;

// int main() {

//   int first_number, second_number, sum;
    
//   cout << "Enter two integers: ";
//   cin >> first_number >> second_number;

//   sum = first_number + second_number;

//   cout << first_number << " + " <<  second_number << " = " << sum;     

//   return 0;


// give the number of elements inside the array
// example 3
// #include<iostream>
// #include<array>
// using namespace std;

// iuse for loop to print each element of the arraynt main(){
//  array<int,5> numbers = {10,20,30,40,50};
//   cout <<numbers.size() << endl;
// return 0 ;
// }

// use for loop to print each element of the array
// example 4
// #include<iostream>
// using namespace std;
// int main(){
//   int num[5] = { 10,20,30,40,50};
//   for ( int i = 0 ;i< 5; i++){
//     cout << i << "  = "<< num[i] << endl;
//   }
//   return 0;
// }



// Sum of Natural Numbers using loop
// example 5
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     int sum = 0;

//     cout << "Enter a positive integer: ";
//     cin >> num;

//     for (int i = 1; i <= num; ++i) {
//         sum += i;
//     }

//     cout << "Sum = " << sum;
//     return 0;
// }

// C++ Program to Find Factorial

// example 6

// #include <iostream>
// using namespace std;
// int factorial(int n) {
   
//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }

// int main() {
//     int num = 5;
//     cout << "factorial"  << num << "is"   << factorial(num) << endl;
//     return 0;
// }

// C++ Program to Find Largest Element of an Array
// example 7
// #include <iostream>
// using namespace std;

// int main() {

//   int i, n;
//   float arr[100];

//   cout << "Enter total number of elements(1 to 100): ";
//   cin >> n;
//   cout << endl;

//   for(i = 0; i < n; ++i) {
//     cout << "Enter Number " << i + 1 << " : ";
//     cin >> arr[i];
//   }

//   for(i = 1;i < n; ++i) {

//     if(arr[0] < arr[i])
//       arr[0] = arr[i];
//   }

//   cout << endl << "Largest element = " << arr[0];

//   return 0;
// }
// Calculate Average of Numbers Using Arrays

// example 8
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i;
//     float num[100], sum=0.0, average;

//     cout << "Enter the numbers of data: ";
//     cin >> n;

//     while (n > 100 || n <= 0)
//     {
//         cout << "Error! number should in range of (1 to 100)." << endl;
//         cout << "Enter the number again: ";
//         cin >> n;
//     }

//     for(i = 0; i < n; ++i)
//     {
//         cout << i + 1 << ". Enter number: ";
//         cin >> num[i];
//         sum += num[i];
//     }

//     average = sum / n;
//     cout << "Average = " << average;

//     return 0;
// }
// Program to Multiply two Numbers

// example 9
// #include <iostream>
// using namespace std;

// int main() {
//   double num1, num2, product;
//   cout << "Enter two numbers: ";

//   cin >> num1 >> num2;
 
//   product = num1 * num2;  

//   cout << "Product = " << product;    
    
//   return 0;
// }
// the program will request the password from the user  , if he enters something wrong the loop will repeat the request again"1234"
// example 10
// #include<iostream>
// using namespace std;
// int main(){
// string pass;
// while( pass != "1234" ){
//    cout <<"Enter password";
//    cin >> pass;

  
// }

// cout <<"successful";
// return 0;
// }


// Check Prime Number
// example 11 
// #include <iostream>
// using namespace std;

// bool check_prime(int);

// int main() {

//   int n;

//   cout << "Enter a positive  integer: ";
//   cin >> n;

//   if (check_prime(n))
//     cout << n << " is a prime number.";
//   else
//     cout << n << " is not a prime number.";

//   return 0;
// }

// bool check_prime(int n) {
//   bool is_prime = true;
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   for (int i = 2; i <= n / 2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   return is_prime;
// }

// C++ Program to Reverse an Integer

// example 12
// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   int reversed_number = 0; 
//   int remainder;

//   cout << "Enter an integer: ";
//   cin >> n;

//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }

//   cout << "Reversed Number = " << reversed_number;

//   return 0;
// }



// Swap Numbers (Using Temporary Variable)
// example 13
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5, b = 10, temp;

//     cout << "Before swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "\nAfter swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     return 0;
// }

// example 14 









