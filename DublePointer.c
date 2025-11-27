/*WAP to print the values and address of 1D,2D and 3D arrays using pointer notation , make use of the concpet of double pointer and pointer to array*/
#include <stdio.h>

int main(){
    int arr1[2]={10,20};
    int size1=2;
    int *p1;
    for(int i=0;i<size1;i++){
        p1=&arr1[i];
        printf("Value of arr1[%d]=%d\n ",i,*p1);
    int address1=(int)&p1;
    printf("Address of p1 at %d: %d\n",i,address1);
    int **p1_5=&p1;
    printf("Address of double pointer 1 & Value of double pointer : %d\n %d\n",(int)&p1_5,**p1_5);
    }

    int arr2[2][2]={{10,20},{30,40}};
    int size2=2;
    int *p2;
    for(int i=0;i<size2;i++){
        for(int j=0;j<size2;j++){
            p2=&arr2[i][j];
            printf("Value of arr2[%d][%d]=%d\n",i,j,*(p2 + i*size2 + j));
            int address2=(int)&p2;
            printf("Address of p2 at [%d][%d]: %d\n",i,j,address2);
            int **p2_5=&p2;
            printf("Address of double pointer 2 & Value of double pointer : %d\n %d\n",(int)&p2_5,**p2_5);

        }
    }

    int arr3[2][2][2]={{{10,20},{30,40}},{{50,60},{70,80}}};
    int size3=2;
    int *p3;
    for(int i=0;i<size3;i++){
        for(int j=0;j<size3;j++){
            for(int k=0;k<size3;k++){
                p3=&arr3[i][j][k];
                printf("Value of arr3[%d][%d][%d]=%d\n",i,j,k,*(p3 + i*size3*size3 + j*size3 + k));
                int address3=(int)&p3;
                printf("Address of p3 at [%d][%d][%d]: %d\n",i,j,k,address3);
                int **p3_5=&p3;
                printf("Address of double pointer 3 & Value of double pointer : %d\n %d\n",(int)&p3_5,**p3_5);

            }
        }
    }



    return 0;

}