/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, max, min;
    int a[100];
    int *p;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;
    max = *p;
    min = *p;

    for (i = 1; i < n; i++)
    {
        p++;

        if (*p > max)
            max = *p;

        if (*p < min)
            min = *p;
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}