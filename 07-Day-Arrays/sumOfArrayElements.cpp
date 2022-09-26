#include<iostream>
using namespace std;

int main() {

    int arr[8] = {1,2,3,4,11,6,8,5};
    int sum = 0;

    for(int i = 0; i < 8; i++) {
        sum = arr[i] + sum;
    }
    cout << sum << endl;
}
