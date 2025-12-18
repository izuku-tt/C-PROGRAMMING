/*
MAZE PATH with 2 parameters
*/
#include <stdio.h>

int maze2(int n, int m) {
    // Base case: If we've reached the bottom-right corner (1x1 maze), there's only one way
    if (n == 1 && m == 1) {
        return 1;
    }

    // Calculate the number of ways to reach the bottom-right corner from the current position
    int rightways = 0;  // Number of ways to reach the bottom-right by moving right
    int downways = 0;   // Number of ways to reach the bottom-right by moving down

    // If we're at the top row, we can only move right
    if (n == 1) {
        rightways = maze2(n, m - 1);
    }
    
    if (m == 1) {  // If we're at the leftmost column, we can only move down
        downways = maze2(n - 1, m);
    }
    if (n > 1 && m > 1) {  // If we're in the middle of the maze, we can move both right and down
        rightways = maze2(n, m - 1);
        downways = maze2(n - 1, m);
    }
    // The total number of ways is the sum of rightways and downways
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n; // number of rows
    printf("enter the number of rows:");
    scanf("%d",&n);

    int m; // number of column
    printf("enter the column:");
    scanf("%d",&m);

    int result =  maze2(n,m);
    printf("the number of ways =%d", result);
	return 0;
}