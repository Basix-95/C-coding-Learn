#include <stdio.h>

union student{
int rollNo;

union Academic{
    int marks
} performance;

};
int main(){

    union student abc;

    abc.rollNo=21;
    printf("%d\n",abc.rollNo);
    
    abc.performance.marks=95;
    printf("%d",abc.performance.marks);
}
