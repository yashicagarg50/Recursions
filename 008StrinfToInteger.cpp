#include<iostream>
using namespace std;

int f(string str, int n) {
    //base case 
    if(n==1) {
        //length of the string is 1, convert it into an integer
        return str[0]-'0';
    }
    //recursive case

    //1. extract the subString that contains the first (n-1) characters
    string subString = str.substr(0, n-1); //1,12,123,1234
    int A = f(subString, n-1); //1: 12 : 123 : 1234
    char ch = str[n-1]; //2 // 3 // 4
    return A*10 + (ch-'0'); //12 // 123 // 1234
}

int main() {
    string str = "1234";
    int n = str.size();

    int x = f(str,n);
    cout << x << endl;
    return 0;
}