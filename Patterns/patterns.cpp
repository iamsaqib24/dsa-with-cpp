// Pattern - 1
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i = 1;
//     cout << "Enter the value n : " << endl;
//     cin >> n;

//     while(i <= n) {
//         int j = 1;
//         while(j <= n) {
//             cout << "*" << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



// Pattern - 2
/*
    1 1 1
    2 2 2
    3 3 3
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i = 1;
//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     while (i <= n) {
//         int j = 1;
//         while (j <= n) {
//             cout << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



// Pattern - 3
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i = 1;
//     cout << "Enter the value of n : " << endl;
//     cin >> n;

//     while (i <= n) {
//         int j = 1;
//         while (j <=n) {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



// Pattern - 4
/*
   1 2 3
   4 5 6
   7 8 9
*/

#include<iostream>
using namespace std;

int main() {
    int n, i = 1, count = 1;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
