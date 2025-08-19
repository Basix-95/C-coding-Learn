#include <stdio.h>


int main(){
    int days;
    
    printf("Enter day: ");
    scanf("%d", &days);
    int years = days / 365;
    days = days % 365;
    int months = days/30;
    days = days % 30;
    int weeks = days/7;
    days = days % 7;
    printf("years : %d , months : %d, weeks : %d, days : %d", years,months,weeks,days);


    return 0;
};

