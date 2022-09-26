#include<iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {

        if(arr[i] == key) {
            return 1;
        }
    }

    return 0;
}

int main () {

    int arr[10] = {-2,8,5,2,9,-16,18,20,4,0};
    int key;

    cout << "Enter the key which you want to search : " << endl;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if(found) {
        cout << "key is present in array." << endl;
    }
    else{
        cout << "key is not found in array." << endl;
    }

}
