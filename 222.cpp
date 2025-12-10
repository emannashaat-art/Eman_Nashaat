
// Nikita and Stack
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




// Beautiful Average
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


// Count Distinct
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




// Sort 3 Letters
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




// Even & Odd
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



// watermelon

// #include <iostream>
// using namespace std;

// int main() {
//     int w;
//     cin >> w;

//     if (w % 2 == 0 && w > 2)
//         cout << "YES";
//     else
//         cout << "NO";

//     return 0;
// }



// Way Too Long Words
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string s;
//     while (n--) {
//         cin >> s;
//         if (s.length() > 10)
//             cout << s[0] << s.length() - 2 << s.back() << endl;
//         else
//             cout << s << endl;
//     }
//     return 0;
// }


// Elephant Steps
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     int ans = x / 5;
//     if (x % 5 != 0) ans++;

//     cout << ans;
//     return 0;
// }



// Capitalization
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     s[0] = toupper(s[0]);
//     cout << s;

//     return 0;
// }


// Beautiful Year
// #include <iostream>
// using namespace std;

// bool good(int y) {
//     string s = to_string(y);
//     return s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] &&
//            s[1]!=s[2] && s[1]!=s[3] &&
//            s[2]!=s[3];
// }

// int main() {
//     int y;
//     cin >> y;

//     while (true) {
//         y++;
//         if (good(y)) {
//             cout << y;
//             break;
//         }
//     }
//     return 0;
// }


// Translation
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s, t;
//     cin >> s >> t;

//     reverse(s.begin(), s.end());

//     if (s == t) cout << "YES";
//     else cout << "NO";

//     return 0;
// }




// Queue at the School
// #include <iostream>
// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;

//     string s;
//     cin >> s;

//     while (t--) {
//         for (int i = 0; i < n - 1; i++) {
//             if (s[i] == 'B' && s[i+1] == 'G') {
//                 swap(s[i], s[i+1]);
//                 i++;
//             }
//         }
//     }

//     cout << s;
//     return 0;
// }



// Presents
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int p[101], ans[101];

//     for (int i = 1; i <= n; i++)
//         cin >> p[i];

//     for (int i = 1; i <= n; i++)
//         ans[p[i]] = i;

//     for (int i = 1; i <= n; i++)
//         cout << ans[i] << " ";

//     return 0;
// }


// Sum of Three Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         if (a == b + c || b == a + c || c == a + b)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }


// Vanya and Divisibility Game
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         if (n % 3 == 0) cout << "Second\n";
//         else cout << "First\n";
//     }

//     return 0;
// }




// Rearranging s to form t
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int q;
//     cin >> q;

//     while (q--) {
//         int n;
//         cin >> n;

//         string s, t;
//         cin >> s >> t;

//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         if (s == t) cout << "YES\n";
//         else cout << "NO\n";
//     }

//     return 0;
// }



// Tower Moves (n moves → m cubes)
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;

//         if (m <= n && (n % 2 == m % 2))
//             cout << "Yes\n";
//         else
//             cout << "No\n";
//     }
//     return 0;
// }


// Strong Password Validation
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         char lastLetter = 'a' - 1;
//         char lastDigit = '0' - 1;
//         bool seenDigit = false, ok = true;

//         for (char c : s) {
//             if (isdigit(c)) {
//                 seenDigit = true;
//                 if (c < lastDigit) ok = false;
//                 lastDigit = c;
//             }
//             else {  
//                 if (seenDigit) ok = false;
//                 if (c < lastLetter) ok = false;
//                 lastLetter = c;
//             }
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }
//     return 0;
// }


