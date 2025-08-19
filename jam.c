#include <stdio.h>

int main(){
    
    char name[20];
    int dob;
    char addr[20];
    printf("enter name: \n");
    scanf("%s", name);

    printf("enter Dob: \n");
    scanf("%d", &dob);

    printf("enter Address: \n");
    scanf("%s", addr);

    printf("%s,\n %d,\n %s", name, dob, addr);

return 0;
};

    
