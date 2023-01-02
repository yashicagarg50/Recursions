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
    }
 return 0;
}
 