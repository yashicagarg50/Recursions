//Given N coins, such that each coin has two sides H (heads) and T (tails), design a recursive algorithm to generate all the possible outcomes that we will get when we toss these N coins simultaneously. 
// n <= 10 

#include<iostream>
using namespace std;

void generateOutcomes(int n, char* out, int i, int j) {

    // base cases
    if(i == n) {
        //you've made a decision for each of the 'n' coins therefore stop

        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // recursive cases

    // take the decision for the ith coin 

    // 1. ith coin can be heads

    {
        out[j] = 'H';
        generateOutcomes(n, out, i+1, j+1);
    }

    // 2. ith coin can be tails
    out[j] = 'T';
    generateOutcomes(n, out, i+1, j+1);
}

int main() {
    int n = 3;
    char out[10];
    generateOutcomes(n, out, 0, 0);

    return 0;
}
 