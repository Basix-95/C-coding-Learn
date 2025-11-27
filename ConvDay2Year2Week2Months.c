//wap to convert days to years, weeks and months//
#include <stdio.h>

int main(){
  int days, years, weeks, months;
  printf("Enter number of days: ");
  scanf("%d", &days);
  years = days /365;
  months = days / 30;
  weeks = days / 7;


     printf("Years: %d\n", years);
     printf("Months: %d\n", months);
     printf("Weeks: %d\n", weeks);
   

        return 0;
}