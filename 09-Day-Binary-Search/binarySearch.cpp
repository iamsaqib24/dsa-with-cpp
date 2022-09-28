#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {

    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = start + (end - start)/2;

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return - 1;
}

int main() {

    int arr[8] = {2,4,6,8,9,11,21,25};


    cout << "Index value of my target is : " << binarySearch(arr, 8, 2) << endl;
}
