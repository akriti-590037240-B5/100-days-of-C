//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer number: ");
    scanf("%lld", &num);

    int digitCount[10] = {0}; // Array to count occurrences of each digit

    // Count occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum occurrences
    int maxCount = 0;
    int mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}