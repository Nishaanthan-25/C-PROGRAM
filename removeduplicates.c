/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void RemoveDuplicates(char s[]) {
    int len = strlen(s);
    char arr[100];
    int resultlength = 0;

    for (int i = 0; i < len; i++) {
        int e = 0;
        for (int j = 0; j < resultlength; j++) {
            if (arr[j] == s[i]) {
                e = 1;
                break;
            }
        }
        if (!e) {
            arr[resultlength] = s[i];
            resultlength++;
        }
    }
    arr[resultlength] = '\0'; 
    printf("%s\n", arr); 
}

int main(void) {
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s); 
    
    RemoveDuplicates(s);
    
    return 0;
}