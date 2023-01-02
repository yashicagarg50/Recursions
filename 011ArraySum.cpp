//Given an array of N integer, design a recursive algorithm to compute the sum of array elements. 
#include<iostream>

using namespace std;

int f(int* x,int n,int i) {
    //base case
    if(i == n-1) {
        //compute the sum of element in x[n-1....n-1] = {x[n-1]}
        return x[n-1];
    }

    if(i==n) {
        //compute the sum of elements in x[n...n-1] = {}
        return 0;
    }

    // recursive cases

    // compute the sum of elements in x[i......n-1]

    // 1. ask your friend to compute the sum of elements in c[i+1.......n-1]
    int A = f(x, n, i+1);

    return x[i] + A; 
}


int main() {
    int x[] = {10,20,30,40,50};
    int n = sizeof(x)/sizeof(int);

    cout << f(x, n, 0) << endl;

    return 0;
}
 