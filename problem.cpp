

// #include <iostream>
// using namespace std;

// int main() {
//     int m;
//     cin >> m;

//     int type=100005;
//     int value=100005;
//     int order=100005;
//     int st=100005;
//     int top = -1;   

//     for (int i = 1; i <= m; i++) {
//         int p, t;
//         cin >> p >> t;
//         type[p] = t;
//         if (t == 1)
//             cin >> value[p];
//         order[i] = p;
//     }

//     for (int i = 1; i <= m; i++) {
//         int idx = order[i];

//         if (type[idx] == 1) {
           
//             top++;
//             st[top] = value[idx];
//         } else {
        
//             if (top >= 0)
//                 top--;
//         }

//         if (top == -1)
//             cout << -1 << " ";
//         else
//             cout << st[top] << " ";
//     }

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[1000];
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     bool found = false;
//     for (int i = 0; i < n; i++) {
//         int restSum = sum - arr[i];
//         double avg = (double)restSum / (n - 1);

//         if (avg == arr[i]) {
//             found = true;
//             break;
//         }
//     }

//     if (found)
//         cout << "YES";
//     else
//         cout << "NO";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[1000];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         bool isNew = true;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isNew = false;
//                 break;
//             }
//         }

//         if (isNew)
//             count++;
//     }

//     cout << count;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     char a, b, c;
//     cin >> a >> b >> c;

//     if (a > b) {
//         char temp = a;
//         a = b;
//         b = temp;
//     }
//     if (b > c) {
//         char temp = b;
//         b = c;
//         c = temp;
//     }
//     if (a > b) {
//         char temp = a;
//         a = b;
//         b = temp;
//     }

//     cout << a << b << c;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; 

//     int arr[1000];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Even numbers: ";
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     cout << "\nOdd numbers: ";
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 != 0) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }
