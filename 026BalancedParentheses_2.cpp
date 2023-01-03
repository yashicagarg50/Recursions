// Given N pairs of parentheses, design a recursive algorithm to generate all the combinations of well-formed parentheses. 
// n <= 8

#include<iostream>
using namespace std;

void generateParentheses(int n, char* out, int j, int open_cnt, int close_cnt) {

    // base case
    if(open_cnt == n and close_cnt == n) { // or j = 2*n
    out[j] = '\0';
    cout << out << endl;
    return;

    }

    // recursive cases

    // make a decision for the jth position

    // 1. place the '(' at the jth position
    if(open_cnt < n) {
        out[j] = '(';
        generateParentheses(n, out, j+1, open_cnt+1, close_cnt);
    }

    // 2. place the ')' at the jth position
    if(close_cnt < open_cnt) {
        out[j] = ')';
        generateParentheses(n, out, j+1, open_cnt, close_cnt+1);
    }
}


int main() {
    int n = 4;
    char out[20];

    generateParentheses(n, out, 0, 0, 0);

    return 0;
}