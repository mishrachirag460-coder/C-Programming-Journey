#include<stdio.h>

int main()
{
    int n;

    printf("Enter Your number = ");
    scanf("%d",&n);

    if(n%3==0)
        printf("Number is divisible by 3");
    else
        printf("Number is not divisible by 3");

    return 0;
}
