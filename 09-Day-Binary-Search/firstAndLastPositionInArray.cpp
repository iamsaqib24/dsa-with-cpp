#include<iostream>

using namespace std;

int firstPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start)/2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int lastPosition(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start)/2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[8] = {0,1,1,1,3,3,3,8};

    cout << "First Index of the array element is : " << firstPosition(arr, 8, 1) << endl;
    cout << "Last Index of the array element is : " << lastPosition(arr, 8, 1) << endl;
}
