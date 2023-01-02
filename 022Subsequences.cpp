/*Given a string, design a recursive algorithm to generate all of its subsequences. 
A subsequence of a sequence is a sequence which can be obtained by removing 0 or more elements from the given sequence such that the relative order b/w the sequence elements doesn't change.
Example
	
	Input : inp[] = "abc"
	Output: ["", "c", "b", "bc", "a", "ac", "ab", "abc"]
Constraints :
 
  1 < n < 10  */

#include<iostream>
using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j) {

    // base case
    if(inp[i] == '\0') { // or i == n
        out[j] == '\0';
        cout << out << endl;
        return;
    }

    // recursive cases

    // generate all the subsequences of inp[i....n-1] i.e take a sequence of (n-i) decision

    // take a decision for the character at the ith index

    // 1. include the ith character to the output subseq.

    out[j] = inp[i];
    generateSubsequences(inp, out, i+1, j+1);

    // 2. exclude the ith character from the output seq.
    generateSubsequences(inp, out, i+1, j);
}

int main() {
    char inp[] = "abc";
    char out[10];

    generateSubsequences(inp, out, 0, 0);

    return 0;
}


 