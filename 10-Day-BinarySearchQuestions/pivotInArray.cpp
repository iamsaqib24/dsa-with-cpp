#include<iostream>

using namespace std;

int getPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        int mid = start + (end - start)/2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
}

int main() {
    int arr[5] = {8, 10, 3, 12, 17};

    cout << "Pivot Element is : " << getPivot(arr, 5) << endl;
}
