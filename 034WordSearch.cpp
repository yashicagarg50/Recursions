//Write a function which prints all triplets of numbers which sum to target without using vectors?

/*Given an m x n grid of characters board and a string word, return true if word exists in the grid. The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally  or  vertically neighbouring. The same letter cell may not be used more than once. 

 */

#include<iostream>
using namespace std;

int subsets(int i, int* out, int j) {
	
	// base case
		if(i == n) {
			cout << out << " ";
		}
	// recursive case

	// take a decision for the ith element to include

	// 1. exclude the ith element 
		subsets(i+1, out, j);
	// 2. include the ith element
		out[j] = inp[i];
		subsets(i+1, out, j+1);
}



int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int t;
	cin >> t;
	int out[n];
	subsets(0,out, 0);
	return 0;
}