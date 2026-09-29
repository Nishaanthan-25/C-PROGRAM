/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s); 
    int l = strlen(s);
    for(int i=0;i<l;i++){
        int e=0;
        for(int j=i+1;j<l;j++){
            if(s[j]==s[i]){
                e=1;
                break;
            }
            
        }
        if (!e){
            printf("%c",s[i]);
            break;
        }
    }

    return 0;
}