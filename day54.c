//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/


#include <stdio.h>

int pivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;
    int leftSum = 0;
    for (int x = 1; x <= n; x++) {
        leftSum += x;
        if (leftSum == totalSum - leftSum + x) {
            return x;
        }
    }
    return -1;
}

int main() {
    printf("Output 1: %d\n", pivotInteger(8)); // Expected output: 6
    printf("Output 2: %d\n", pivotInteger(1)); // Expected output: 1
    printf("Output 3: %d\n", pivotInteger(4)); // Expected output: -1
    return 0;
}
