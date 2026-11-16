//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
int findRepeatedElement(int nums[], int n) {
    int seen[100] = {0}; // Assuming the numbers are in the range 0-99
    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i]; // Found the repeated element
        }
        seen[nums[i]] = 1; // Mark the element as seen
    }
    return -1; // No repeated element found (should not happen as per the problem statement)
}   

int main() {
    int nums[] = {1, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int repeatedElement = findRepeatedElement(nums, n);
    printf("%d\n", repeatedElement);
    return 0;
}