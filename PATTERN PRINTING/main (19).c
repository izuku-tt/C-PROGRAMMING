/*
DIAMOND STAR PATTERN (n is always odd)
This program generates a diamond-shaped pattern of stars. 
The number of rows is determined by the user input and is always odd.
*/

#include <stdio.h>

int main()
{
    int n;  // Variable to store the number of rows in the diamond (must be odd)

    // Prompt the user to enter the number of rows (which must be an odd number)
    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    // Variables to manage the spaces and stars for each row
    int nsp = n / 2;  // 'nsp' represents the number of leading spaces in each row
    int nst = 1;      // 'nst' represents the number of stars to be printed in the current row

    // 'ml' (middle line) represents the row number of the widest part of the diamond (middle row)
    int ml = n / 2 + 1; 

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        
        // Print leading spaces in the current row
        for (int j = 1; j <= nsp; j++) {
            printf(" ");  // Print a space character
        }

        // Print stars in the current row
        for (int k = 1; k <= nst; k++) {
            printf("*");  // Print a star character
        }

        // Logic to adjust the number of spaces and stars based on the row
        // Before reaching the middle row, spaces decrease and stars increase
        // After the middle row, spaces increase and stars decrease
        if (i < ml) {
            nsp--;   // Decrease the number of spaces by 1
            nst += 2;  // Increase the number of stars by 2
        } else {
            nsp++;   // Increase the number of spaces by 1
            nst -= 2;  // Decrease the number of stars by 2
        }

        // Move to the next line (new row)
        printf("\n");
    }

    return 0;  // Return 0 to indicate the program has executed successfully
}
