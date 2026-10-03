//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h> 

int main() {
    char name[100];
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    int len = strlen(name);
    for(int i = 0; i < len; i++) {
        if(i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            putchar(name[i]);
            putchar('.');
        }
        if(name[i] == ' ' && name[i+1] != '\0') {
            printf(" ");
            for(int j = i + 1; j < len; j++) {
                if(name[j] != ' ' && name[j] != '\n') {
                    putchar(name[j]);
                }
            }
            break;
        }
    }
    
    printf("\n");
    return 0;
}