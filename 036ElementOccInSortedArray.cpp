#include<iostream>
using namespace std;



int f(int *arr, int t, int s, int e) {

    //base case
    if(s>e) {
        // search space is empty
        return -1;
    }
    // recursive case

    // search for the 't' in arr[s......e]
    int count = 0;
    int m = s + (e-s)/2;
    if(arr[m] == t) {
        //you've found 't'
        
            count ++;
            int j=m-1;
            while(arr[j]==t){
                count ++;
                j--;
            }
            int r=m+1;
            while(arr[r]==t){
                count ++;
                r++;
            }
            return count;
        }

    else if(t < arr[m]) {
        // search for the 't' in arr[s....m-1]
        return f(arr,t,s,m-1);

    }
    else {
        //search for the 't' in arr[m+1......e]
        return f(arr,t,m+1,e);
    }
}


int main() {
    int n;
    int arr[100000];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int t;
    cin >> t;

    cout << f(arr, t, 0, n-1);
    return 0;
}

