#include<iostream>
using namespace std;

int BubbleSort(int n, int i, int* arr, int j) {

    // put the ith position in unsorted part
        bool flag = true; // assume array is sorted
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            flag = false;
        }

        BubbleSort(n, i+1, arr, j+1);
        if(flag) {
            break;
        }

        return 
    // ask your frnd to do other things
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    BubbleSort(n, 1, arr);

    return 0;
}