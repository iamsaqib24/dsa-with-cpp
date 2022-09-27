#include<iostream>

using namespace std;

int findDuplicate(int arr[], int size) {

    int ans = 0;

    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < size; i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main() {

    int arr[5] = {4,2,1,3,1};
    int brr[7] = {6,3,1,5,4,3,2};

    cout << "Duplicate element is : " << findDuplicate(arr, 5) << endl;
    cout << "Duplicate element is : " << findDuplicate(brr, 7) << endl;
}
