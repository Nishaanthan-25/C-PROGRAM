/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int countDigit(int n, int digit)
{
    if (n == 0)
        return 0;

    if (n % 10 == digit)
        return 1 + countDigit(n / 10, digit);
    else
        return countDigit(n / 10, digit);
}
int main()
{
    int n, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    count = countDigit(n, digit);

    printf("The digit %d occurs %d times", digit, count);

    return 0;
}