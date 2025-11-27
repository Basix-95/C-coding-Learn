/*Write a C program to demonstrate basic string operations such as copying one string to another, concatenating strings with spaces, 
finding the length of strings, and comparing two strings using string functions like strcpy(), strcat(), strlen(), and strcmp(). 
Print the results of concatenation, length, and string comparison.
*/
#include <stdio.h>
int my_strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
void my_strcat(char dest[], char src[]) {
    int i = my_strlen(dest);
    dest[i++] = ' ';  
    int j = 0;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}
int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
int main() {
    char str1[100], str2[100], str3[200];

    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    if (str1[my_strlen(str1) - 1] == '\n') str1[my_strlen(str1) - 1] = '\0';
    if (str2[my_strlen(str2) - 1] == '\n') str2[my_strlen(str2) - 1] = '\0';

    my_strcpy(str3, str1);
    my_strcat(str3, str2);


    printf("\nConcatenated string: %s\n", str3);
    printf("Length of first string: %d\n", my_strlen(str1));
    printf("Length of second string: %d\n", my_strlen(str2));
    printf("Length of concatenated string: %d\n", my_strlen(str3));

    int cmp = my_strcmp(str1, str2);
    if (cmp == 0)
        printf("The strings are equal.\n");
    else if (cmp < 0)
        printf("The first string is less than the second string.\n");
    else
        printf("The first string is greater than the second string.\n");

    return 0;
}