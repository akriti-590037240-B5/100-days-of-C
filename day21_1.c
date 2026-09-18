//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h> 
#include <math.h> 

int main() {
    int num, firstDigit, lastDigit, numDigits = 0, tempNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10; 

    
    while (tempNum > 0) {
        firstDigit = tempNum % 10; 
        tempNum /= 10;            
        numDigits++;
    }

    
    if (numDigits == 1) {
        printf("%d\n", num);
        return 0;
    }

    
    int swappedNum = lastDigit * pow(10, numDigits - 1) + (num / 10) % (int)pow(10, numDigits - 2) * 10 + firstDigit;

    printf("%d\n", swappedNum);

    return 0;
}