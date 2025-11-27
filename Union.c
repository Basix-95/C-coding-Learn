#include <stdio.h>
#include <string.h>

union Student {
    int rollNo;
    float height;
    char firstLetter;
};

int main() {
   
    union Student data;

    data.rollNo = 21;
    printf("%d\n", data.rollNo);
    data.height = 5.2;
    printf("%.2f\n", data.height);
    data.firstLetter = 'N';
    printf("%c", data.firstLetter);

    return 0;
}