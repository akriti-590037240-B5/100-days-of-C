//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter a number: ");
    if(scanf("%d", &num) != 1)
    {
        return 1;
    }

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}