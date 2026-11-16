//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
void productExceptSelf(int nums[], int n, int answer[]) {
    int leftProduct[n];
    int rightProduct[n];        
    leftProduct[0] = 1;
    for (int i = 1; i < n; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];  
    }
    rightProduct[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {      
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];  
    }
    for (int i = 0; i < n; i++) {   
        answer[i] = leftProduct[i] * rightProduct[i];  
    }
}   

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int answer[n];
    productExceptSelf(nums, n, answer);
    
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    
    return 0;
}