/*
MAZE PATH FINDER
*/

#include <stdio.h>

// Function to count the number of ways to reach the bottom-right corner of the maze
int maze(int cr, int cc, int er, int ec) {
    int rightways = 0;
    int downways = 0;

    // Base case: If current row and column match end row and column, a path is found
    if (cr == er && cc == ec) return 1;

    // If the current row is at the end, we can only move right
    if (cr == er) {
        rightways += maze(cr, cc + 1, er, ec);
    }
    // If the current column is at the end, we can only move down
    else if (cc == ec) {
        downways += maze(cr + 1, cc, er, ec);
    }
    // If neither row nor column is at the end, we can move both right and down
    else if (cr < er && cc < ec) {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
    }

    // The total number of ways is the sum of both possible ways
    return rightways + downways;
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int m;
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int result = maze(1, 1, n, m);
    printf("The number of ways = %d\n", result);

    return 0;
}
