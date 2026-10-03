//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int n, target, i;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}