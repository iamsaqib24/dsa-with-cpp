// Pattern - 1
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/

#include<iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter the value n : " << endl;
    cin >> n;

    while(i <= n) {
        int j = 1;
        while(j <= n) {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
