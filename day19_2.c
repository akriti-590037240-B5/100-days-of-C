//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10; 
        num /= 10;      
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}