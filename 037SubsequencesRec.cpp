//Print all the subsequences in a space separated manner and isplay the total no. of subsequences.

#include<iostream>
using namespace std;
#include<cmath>

void generateSubsequences(char* inp, char* out, int i, int j) {

	//base cases
	if(inp[i] == '\0') {
		out[j] = '\0';
		cout << out << " ";
		return;
	}

	//recursive cases

	// generate all the subsequences of inp[i....n-1] i.e take a sequence of (n-i) decision

	// take a decision for the character at the ith index

	// 2. exclude the ith character from the output seq.
	generateSubsequences(inp, out, i+1, j);
	

	// 1. include the ith character to the output seq.

	out[j] = inp[i];
	generateSubsequences(inp, out, i+1, j+1);

	}

int main() {
	char inp[1000];
	char out[1000];
	cin >> inp;
	generateSubsequences(inp, out, 0, 0);
	string s = inp;
	cout << endl << pow(2,s.size());
	
	return 0;
}