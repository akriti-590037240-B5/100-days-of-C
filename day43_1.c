//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    
    // Reverse the string
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    return 0;
}