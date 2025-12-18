/*
STAIR CASE problem
*/

#include <stdio.h>
int stair(int stairs) {
    // Base case: If there's 1 or 2 stairs, return the number of stairs.
    // For 1 stair, there's only 1 way to reach it (1 step).
    // For 2 stairs, there are 2 ways (two 1-steps or one 2-step).
    if (stairs == 1 || stairs == 2) return stairs;

    // Recursive case: The number of ways to reach the nth stair is the sum of:
    // 1. The ways to reach (n-1)th stair, because from (n-1), we can take one 1-step to reach nth.
    // 2. The ways to reach (n-2)th stair, because from (n-2), we can take one 2-step to reach nth.
    
    int totalWays = stair(stairs - 1) + stair(stairs - 2);
    
    // Return the total number of ways to reach the nth stair.
    return totalWays;
}

int main()
{
    int stairs;
    printf("Enter the nummber of stairs:");
    scanf("%d",&stairs);
    int ways= stair(stairs);
    printf("the number of ways to reach %dth stair is %d",stairs,ways);
    return 0;
}
