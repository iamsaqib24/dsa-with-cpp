#include<iostream>

using namespace std;

void swapAlternate(int arr[], int size) {

    int temp = 0;

    for(int i = 0; i < size; i += 2) {
        if(i + 1 < size) {
            // swap(arr[i], arr[i + 1]);
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[8] = {3,5,1,6,4,9,8,0};
    int brr[5] = {3,2,6,4,1};
    int crr[9] = {1,2,3,4,5,6,7,8,9};

    swapAlternate(arr, 8);
    swapAlternate(brr, 5);
    swapAlternate(crr, 9);

    printArray(arr, 8);
    printArray(brr, 5);
    printArray(crr, 9);
}
