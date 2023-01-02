//Given an array of N integers and a target integer T, design a recursive algorithm to find the index of its last occurrence in the given array. 
//note : return -1 if T is not present in the given array. 

#include<iostream>

using namespace std;

int f(int *x, int t, int i) {

    //base case
    if(t == -1) {
        // 't' is not present
        return -1;
    }

    // recursive cases

    // search for the index of the last occ. of the 't' in x[0......i]

    if(x[i] == t) {
        // you've found 't'
        return i;
    }

    // ask your friend to search for the index of the last occ. of the 't' in x[0.....i-1]

    return f(x, t, i-1);
}

int main() {

    int x[] = {10,20,30,20,30};
    int n = sizeof(x)/sizeof(int);
    int t = 30;

    cout << f(x,t,n-1) <<endl;
    return 0;
} 