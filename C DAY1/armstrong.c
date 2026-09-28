#include<stdio.h>
#include<math.h>
int main(){
    int n,org_num,a;
    scanf("%d",&n);
    org_num=n;
    a=n;
    int c=0;
    int s=0;
    while(n!=0){
        c++;
        n/=10;
    }
    while(a!=0){
        int b = a % 10;
        s=s+(pow(b,c));
        a/=10;
    }
    if(s==org_num){
        printf("%d it is an armstrong number ",org_num);
    }
    else{
        printf("%d it is not a armstrong number ",org_num);
    }
}