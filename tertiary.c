// What is the tertiary operator in C//
//If condition is true, it returns value_if_true , If condition is false, it returns value_if_false.
                        









#include <stdio.h>

int main(){
int a1=5,a2=3,a3=7,a4=1;
int max=(a1>a2)?a1:a2;
printf("Max is %d\n",max);
int max2= a1>a2 ? (a1>a3 ? a1:a3) : (a2>a3 ? a2:a3);
int min= a1>a2 ? (a2>a3 ? a3:a2) : (a1>a3 ? a3:a1);
int max3 = (a1 > a2) ? ((a1 > a3) ? ((a1 > a4) ? a1 : a4) : ((a3 > a4) ? a3 : a4))
                         : ((a2 > a3) ? ((a2 > a4) ? a2 : a4) : ((a3 > a4) ? a3 : a4));
int min2=(a1>a2) ? ((a2<a3)?((a2<a4)?a2:a4):((a3<a4)?a3:a4))
                     : ((a2 < a3) ? ((a2 < a4) ? a2 : a4) : ((a3 < a4) ? a3 : a4));
printf("Min2 is %d\n",min2);
printf("Max3 is %d\n",max3);
printf("Min is %d\n",min);
printf("Max2 is %d\n",max2);
        return 0;
}
//wap to find all +ve -ne and zero numbers
//count the number of positive negative numbers and zeros entered