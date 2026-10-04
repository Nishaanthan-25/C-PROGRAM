/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 4, i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
            printf("  ");

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = i; j < n; j++)
            printf("  ");

        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}