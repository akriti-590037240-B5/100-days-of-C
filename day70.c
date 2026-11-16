//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <ctype.h>
void toSentenceCase(char str[]) {
    int i = 0;
    int capitalizeNext = 1; // Flag to indicate if the next character should be capital
    int j = 0; // Index for the new string  
}   

int main() {
    char str[] = "I am trying to build logic.";
    toSentenceCase(str);
    printf("%s\n", str);
    return 0;
}