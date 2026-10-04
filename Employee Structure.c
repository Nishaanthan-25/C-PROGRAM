/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}