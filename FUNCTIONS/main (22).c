/*
BASIC EXAMPLE
*/

#include<stdio.h> 

void england(){
    printf("you are in england?\n"); // Prints the message to the console.
    return; // Exits the function. As it's a void function, this return is optional.
}

void australia(){
    printf("you are in australia?\n"); // Prints the message to the console.
    england(); // Calls the `england()` function, so after the Australia message, the England message will also be printed.
    return; // Exits the function. Optional for void functions.
}

void india(){
    printf("you are in INDIA?\n"); // Prints the message to the console.
    australia(); // Calls the `australia()` function, so after the India message, the Australia and England messages will also be printed.
    return; // Exits the function. Optional for void functions.
}

int main(){
    india(); // Calls the `india()` function, initiating the chain of function calls.
    return 0; // Indicates successful execution of the program.
}