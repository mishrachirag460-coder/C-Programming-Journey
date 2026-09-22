#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number : " );
    scanf("%d",&n);
    if (n%5==0 && n%11==0)
    printf("This number is divisible by 11 and 5 ");
    else 
    printf("This number is not divisible by 11 and 5 ");
    return 0;
}    
