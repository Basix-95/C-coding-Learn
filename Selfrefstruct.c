/*Show links between 5 objects using multiple link*/

#include <stdio.h>

struct node {
    int data;
    struct node* prev_link;
    struct node* next_link;
};

int main()
{
    struct node ob1; 

  
    ob1.prev_link = NULL;
    ob1.next_link = NULL;
    ob1.data = 10;

    struct node ob2; 

    
    ob2.prev_link = NULL;
    ob2.next_link = NULL;
    ob2.data = 20;

    struct node ob3; 

    ob3.prev_link = NULL;
    ob3.next_link = NULL;
    ob3.data = 30;
    
    struct node ob4;
    ob4.prev_link = NULL;
    ob4.next_link = NULL;
    ob4.data = 40;

    struct node ob5;
    ob5.prev_link = NULL;
    ob5.next_link = NULL;
    ob5.data = 50;

    ob1.next_link = &ob2;
    ob2.next_link = &ob3;
    ob3.next_link = &ob4;
    ob4.next_link = &ob5;

    ob2.prev_link = &ob1;
    ob3.prev_link = &ob2;
    ob4.prev_link = &ob3;
    ob5.prev_link = &ob4;

   
    printf("%d\t", ob1.data);
    printf("%d\t", ob1.next_link->data);
    printf("%d\t", ob1.next_link->next_link->data);
    printf("%d\t", ob1.next_link->next_link->next_link->data);
    printf("%d\t", ob1.next_link->next_link->next_link->next_link->data);

    printf("%d\t", ob2.prev_link->data);
    printf("%d\t", ob2.data);
    printf("%d\t", ob2.next_link->data);
    printf("%d\t", ob2.next_link->next_link->data);
    printf("%d\t", ob2.next_link->next_link->next_link->data);


    printf("%d\t", ob3.prev_link->prev_link->data);
    printf("%d\t", ob3.prev_link->data);
    printf("%d\t", ob3.next_link->data);
    printf("%d\t", ob3.next_link->next_link->data);
    printf("%d\t", ob3.data);

    printf("%d\t", ob4.prev_link->prev_link->prev_link->data);
    printf("%d\t", ob4.prev_link->prev_link->data);
    printf("%d\t", ob4.prev_link->data);
    printf("%d\t", ob4.data);
    printf("%d\t", ob4.next_link->data);

    printf("%d\t", ob5.prev_link->prev_link->prev_link->prev_link->data);
    printf("%d\t", ob5.prev_link->prev_link->prev_link->data);
    printf("%d\t", ob5.prev_link->prev_link->data);
    printf("%d\t", ob5.prev_link->data);
    printf("%d\t", ob5.data);

    return 0;
}