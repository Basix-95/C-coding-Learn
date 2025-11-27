/*WAP to manipulate strings using arrays: Using standard library functions of string
Define user-defined functions for copy, length, concatenation and string comparison.*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    
    char copyStr[100];
    strcpy(copyStr, str1);
    printf("Copied string: %s\n", copyStr);

    char concatStr[200];
    strcpy(concatStr, str1);
    strcat(concatStr, str2);
    printf("Concatenated string: %s\n", concatStr);

    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("Strings are equal.\n");
    } else if (cmpResult < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}