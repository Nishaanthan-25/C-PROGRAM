/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}