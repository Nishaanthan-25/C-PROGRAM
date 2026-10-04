/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 4, i, j;

    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
            printf("  ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    for (i = 2; i <= n; i++)
    {
        for (j = n; j > i; j--)
            printf("  ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}