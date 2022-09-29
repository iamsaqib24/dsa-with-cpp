#include<iostream>

using namespace std;

int firstOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int lastOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[10] = {0,1,1,1,3,3,3,3,3,4};

    int first = firstOcc(arr, 10, 4);
    int last = lastOcc(arr, 10, 4);

    int totalNoOfOcc = (last - first) + 1;

    cout << "Total no. of occurence is : " << totalNoOfOcc << endl;
}
