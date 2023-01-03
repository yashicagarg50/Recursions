/* 

Given a M x N maze with some blocked cells ( marked with X ), and a rat that wants to go from the (0, 0)th cell (source) to the (M-1, N-1)th cell (destination) design a recursive algorithm to count the number of paths that exists to reach destination cell from the source cell such at any point of time the rat can move one step either in the right direction or the down direction. 

 */

#include<iostream>

using namespace std;

int f(char maze[][10], int m, int n, int i, int j) {

	// base case

	if(i == m-1 and j == n-1) {
		// you've reached the destination
		if(maze[i][j] == 'X') {
			// destination is blocked
			return 0;
		}
		return 1;
	}


	if(i == m or j == n) {
		// rat is outside the matrix
		return 0;
	}

	if(maze[i][j] == 'X') {
		// you are at a cell which is blocked
		return 0;
	}

	// recursive case

	// if(j == n-1) {
	// 	// you are at a cell which is the last column
	// 	return f(maze, m, n, i+1, j);
	// }

	// if(i == m-1) {
	// 	// you are at a cell which is the last row
	// 	return f(maze, m, n, i, j+1);
	// }

	// you are at a cell from where you can either move right or down

	return f(maze, m, n, i, j+1) + f(maze, m, n, i+1, j);


}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"};
	int m = 4;
	int n = 4;

	cout << f(maze, m, n, 0, 0) << endl;

	return 0;
}