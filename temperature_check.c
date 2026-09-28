#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your temprature = ");
    scanf("%d",&n);
    if(n<20)
        printf("Cold");
    else if(n>=20 && n<=30)
        printf("Normal");
    else
    printf("Hot");
    return 0;
}   
