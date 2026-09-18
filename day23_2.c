//Q46: Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main() {
    int i, j;
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}