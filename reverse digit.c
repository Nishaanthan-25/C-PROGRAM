/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    rev = rev * 10 + n % 10;

    return reverse(n / 10, rev);
}

int main()
{
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = reverse(n, 0);

    printf("Reversed number = %d", result);

    return 0;
}