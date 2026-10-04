/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 5, i, j, num;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        num = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}