//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, newElement;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element
    printf("Enter the elements of the sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &newElement);

    // Find the appropriate position to insert the new element
    int pos = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > newElement) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[pos] = newElement;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}