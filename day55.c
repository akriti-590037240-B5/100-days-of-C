//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>
int findMajorityElement(int nums[], int n) {
    int count = 0;
    int candidate = -1;     

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int majorityElement = findMajorityElement(nums, n);
    
    // Count occurrences of the candidate
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == majorityElement) {
            count++;
        }
    }
    
    // Check if the candidate is indeed the majority element
    if (count > n / 2) {
        printf("%d\n", majorityElement);
    } else {
        printf("-1\n");
    }
    
    return 0;
}