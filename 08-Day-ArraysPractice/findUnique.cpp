#include<iostream>

using namespace std;

int findUnique(int arr[], int size) {

    int ans = 0;

    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int arr[7] = {3,2,3,2,4,1,4};

    cout << "Unique element is : " << findUnique(arr, 7) << endl;;
}