/*Wap to link 5 objects using single link*/
#include <stdio.h>

struct node {
    int data1;
    char data2;
    struct node* link;
};

int main()
{
    struct node ob1; 

    ob1.link = NULL;
    ob1.data1 = 10;
    ob1.data2 = 20;

    struct node ob2; 

    ob2.link = NULL;
    ob2.data1 = 30;
    ob2.data2 = 40;

    struct node ob3;
    ob3.link = NULL;
    ob3.data1 = 50;
    ob3.data2 = 60;

    struct node ob4;
    ob4.link = NULL;
    ob4.data1 = 70;
    ob4.data2 = 80;

    struct node ob5;
    ob5.link = NULL;
    ob5.data1 = 90;
    ob5.data2 = 100;
    
    ob1.link = &ob2;
    ob2.link= &ob3;
    ob3.link= &ob4;
    ob4.link= &ob5;

    printf("%d\n", ob1.data1);
    printf("%d\n", ob1.data2);
    printf("%d", ob1.link->data1);
    printf("\n%d", ob1.link->data2);
    printf("\n%d", ob1.link->link->data1);
    printf("\n%d", ob1.link->link->data2);
    printf("\n%d", ob1.link->link->link->data1);
    printf("\n%d", ob1.link->link->link->data2);
    printf("\n%d", ob1.link->link->link->link->data1);
    printf("\n%d", ob1.link->link->link->link->data2);
    printf("\n%d", ob1.link->link->link->link->link->data1);
    printf("\n%d", ob1.link->link->link->link->link->data2);
    return 0;
}