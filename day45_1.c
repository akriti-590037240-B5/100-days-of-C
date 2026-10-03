//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to count its frequency: ");
    scanf("%c", &ch);
    
    int frequency = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            frequency++;
        }
    }
    
    printf("Frequency of '%c' in the string is: %d\n", ch, frequency);
    return 0;
}