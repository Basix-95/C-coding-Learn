/*WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.*/
#include <stdio.h>

int main() {
    int n, target, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("The number %d appears %d time(s) in the list.\n", target, count);
    return 0;
}