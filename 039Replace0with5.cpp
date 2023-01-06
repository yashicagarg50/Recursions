#include<iostream>
using namespace std;

void replace5(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		return;
	}

	// recursive case

	// replace all the 0's with 5's in inp[i....n-1]

	if(inp[i] == '0') {
		// 1. replace it with 5
		inp[i] = '5';
	}

	// replace all the 0's with 5's in inp[i+1....n-1]
	replace5(inp, i+1);
}

int main () {
	int N;
    cin >> N;
	int M = N; // 103
	// cin >> N;
	int count = 0;
	while (N!=0) {
		int R = N % 10; // 3 // 0 //1
		count ++; //1  // 2 //3
		N = N / 10; //10 // 1 // 0
	}

    // checked count is 3 so upar wala is working

	char inp[count]; //declared inp here with 3 indices
    // string str="";
	for(int l=count; l>0; l--) {
		int P = M % 10; //3 0 1
		inp[l-1] = P + 48; //inp[2] = 3 inp[1] = 0 inp[0] = 1
        // str += M;
		M = M / 10; // 10 1 0
	}
    

	replace5(inp, 0);
    for(int i=0; i<count; i++){
        cout << inp[i];
    }
	
	return 0;
}