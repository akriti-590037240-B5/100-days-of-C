//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    char *token = strtok(str, " \n");
    while(token != NULL) {
        int len = strlen(token);
        for(int i = len - 1; i >= 0; i--) {
            putchar(token[i]);
        }
        putchar(' ');
        token = strtok(NULL, " \n");
    }
    
    printf("\n");
    return 0;
}