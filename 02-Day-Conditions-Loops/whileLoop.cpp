// While loop

#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;

    // find prime or not
    int i = 2;
    while (i < n) {
        if (n % i == 0){
            cout << "Entered number is prime " << endl;
            break;
        }
        else {
            cout << "Entered number is not prime " << endl;
            break;
        }
        i++;
    }

    // Sum of all even numbers
    // if(n%2 == 0){
    //     int i = 2, sum = 0;
    //     while (i <= n) {
    //         sum += i;
    //         i = i +2;
    //     }
    //     cout << "Sum of all even numbers is : " << sum << endl;
    // }

    // Sum of N numbers
    // int i = 1, sum = 0;
    // while (i <= n){
    //     sum += i;
    //     i++;
    // }
    // cout << "Sum is : " << sum << endl;


    // Print 1 to n
    // int i = 1;
    // while (i <= n) {
    //     cout << i << endl;
    //     i++;
    // }
}
