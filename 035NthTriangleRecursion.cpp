//Take as input N, a number. Write a recursive function to find Nth triangle where 1st triangle is 1, 2nd triangle is 1 + 2 = 3, 3rd triangle is 1 + 2 + 3 = 6, so on and so forth. Print the value returned.
//constraint : 1 <= N <= 100
#include<iostream>
using namespace std;


int add(int n) {

    // base case
    if(n == 1) {
        return 1;
    }

	// recursive case
    int A = add(n-1); //add(2) 1
	return A + n; //2 + 3 + 1
}

int main() {
	int n;
    cin >> n;
    cout << add(n);
	return 0;
}