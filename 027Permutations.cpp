/*Given a string, design a recursive algorithm to generate all of its permutations.  
A permutation of a given string is a rearrangement of its characters. 
Example  :
Input     : "abc" 
Output : "abc", "acb", "bac", "bca", "cab", "cba" 
*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void generatePermutations(char* inp, int n, int i) {

    // base cases
    if(i == n) {
        cout << inp << endl;
        return;
    }

    // recursive cases

    // generate the permutations of inp[i......n-1]

    // make a decision for the ith position

    for(int j=i; j<=n-1; j++) {
        swap(inp[i], inp[j]);
        generatePermutations(inp, n, i+1);
        swap(inp[i], inp[j]); // back-tracking
    }
    return;
}

int main() {
    char inp[] = "abc";
    int n = strlen(inp);

    generatePermutations(inp, n, 0);
    return 0;
}
