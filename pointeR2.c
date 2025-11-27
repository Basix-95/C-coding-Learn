/*Perform pointer arithmetic on pointers(increment/decrement) of different datatype and observe the changes in memory address and the efects on data acess*/

#include <stdio.h>

int main() {
    int x[2] = {10, 20};
    int *p;

    for (int i = 0; i < 2; i++) { 
        p = &x[i];
        printf("--- Starting with x[%d] ---\n", i);
        printf("Initial state:    p points to %p (value %d)\n", p, *p);

        p = &x[i]; 
        printf("Before ++p:       p = %p\n", p);
        ++p;      
        printf("After ++p:        p = %p (now points to %d)\n", p, *p);
        
       
        p = &x[i]; 
        printf("Before p++:       p = %p\n", p);
        p++;       
        printf("After p++:        p = %p (now points to %d)\n", p, *p);

      
        p = &x[i+1]; 
        printf("Before --p:       p = %p\n", p);
        --p;      
        printf("After --p:        p = %p (now points to %d)\n", p, *p);
        
      
        p = &x[i+1];
        printf("Before p--:       p = %p\n", p);
        p--;      
        printf("After p--:        p = %p (now points to %d)\n", p, *p);
        
        printf("\n");
    }

    return 0;
}