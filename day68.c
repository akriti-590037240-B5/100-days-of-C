//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>
int findMissingNumber(int nums[], int n) {
    int total = n * (n + 1) / 2; // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return total - sum; // The missing number
}   

int main() {
    int nums[] = {0, 3, 2, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int missingNumber = findMissingNumber(nums, n);
    printf("%d\n", missingNumber);
    return 0;
}