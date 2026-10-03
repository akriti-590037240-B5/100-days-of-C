//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


#include<stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform diagonal traversal
    printf("Diagonal traversal: ");
    for (i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i + j == rows - 1 && i != j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}