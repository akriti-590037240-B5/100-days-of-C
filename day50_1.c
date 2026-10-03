//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    
    printf("Enter a date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);
    
    // Replace '/' with '-'
    for(int i = 0; i < strlen(date); i++) {
        if(date[i] == '/') {
            date[i] = '-';
        }
    }
    
    // Replace '04' with 'Apr'
    char *month = strstr(date, "-04-");
    if(month != NULL) {
        month[1] = 'A';
        month[2] = 'p';
        month[3] = 'r';
    }
    
    printf("Formatted date: %s", date);
    
    return 0;
}