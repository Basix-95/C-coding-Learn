/*wap to illustrate the use of return, break & continue statement*/
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==5){
            continue; //skips the current iteration when i is 5
        }
        if(i==8){
            break; //exits the loop when i is 8
        }
        if(i==10){
            return 0; //exits the program when i is 10
        }
        printf("%d\n", i);
    }
    return 0;
}