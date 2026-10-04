/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, j, sum, maxSum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0;

        for (j = i; j < n; j++)
        {
            sum = sum + a[j];

            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    printf("Maximum subarray sum = %d", maxSum);

    return 0;
}