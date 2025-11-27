#include <stdio.h>
#include <string.h>

struct Books{
    char title[50];
    char author[10];
    char publisher[20];
    int page_no;
    float price;
};

void print_book(struct Books book){
    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book publisher: %s\n", book.publisher);
}

int main(){
    struct Books book1;
    struct Books book2;

    strcpy(book1.title, "The C programming Language");
    strcpy(book1.author, "DennisR");
    strcpy(book1.publisher, "PHI");

    strcpy(book2.title, "Let Us C");
    strcpy(book2.author, "YashavantK");
    strcpy(book2.publisher,"BPB");

    print_book(book1);
    print_book(book2);

    return 0;
}