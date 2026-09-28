#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s=0;
    for(int i = 1;i<=a/2;i++){
        if(a%i==0){
            s+=i;
        }
    }
    if(s==a){
        printf("%d it is a perfect number",a);
    }
    else{
        printf("%d it is not a perfect number",a);
    }
}