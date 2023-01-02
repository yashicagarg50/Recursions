//Given a sorted array consisting of N distinct integers and a target integer T, design a recursive algorithm to find the index of its occurrence in the array. 
//note : return -1 if T is not present in the given array. 

#include<iostream>
using namespace std;

int f(int*x, int t, int s, int e) {

    //base case
    if(s>e) {
        // search space is now empty 
        return -1;
    }

    // recursive cases

    // search for the 't' in x[s......e]

    int m = s+(e-s)/2;
    if(x[m] == t) {
        // you've found 't'
        return m;
    }
    else if(t < x[m]) {
        // search for the 't' in x[s......m-1]
        return f(x, t, s, m-1);
    }
    else {
        // search for the 't' in x[m+1.....e]
        return f(x, t, m+1, e);
    }
}

int main() {

    int x[] = {10, 20, 30, 40, 50};
    int n = sizeof(x)/sizeof(int);
    int t = 100;

    cout << f(x, t, 0, n-1) << endl;

    return 0;
}

 