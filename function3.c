/*WAP to find if a given number is a palindrome (reverse). Use function palindrome or reverse.*/
#include <stdio.h>
int pallindrome_check(int x);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    pallindrome_check(num);
    return 0;
}
int pallindrome_check(int x) {
    int original = x, reversed = 0, remainder;
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome\n", original);
    } else {
        printf("%d is not a palindrome\n", original);
    }
    return 0;
}