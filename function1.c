/*Wap to select a candidate based on height and age.Define a user defined function and set conditions where age is <25 and height >5 foot*/
#include <stdio.h>
int candidate_select(int x, float y);
int main() {
    int age;
    float height;
    printf("Enter age and height (in feet): ");
    scanf("%d %f", &age, &height);
    candidate_select(age, height);
    return 0;
}
int candidate_select (int x, float y) {
    if (x < 25 && y > 5.0) {
        printf("Candidate is selected\n");
    } else {
        printf("Candidate is not selected\n");
    }
    return 0;
}