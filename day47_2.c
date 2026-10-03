//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int maxLength = 0;
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    char *token = strtok(str, " \n");
    while(token != NULL) {
        if(strlen(token) > maxLength) {
            maxLength = strlen(token);
            strcpy(longest, token);
        }
        token = strtok(NULL, " \n");
    }
    
    printf("Longest word: %s\n", longest);
    return 0;
}