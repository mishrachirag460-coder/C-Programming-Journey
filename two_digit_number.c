#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your number = ");
    scanf("%d",&n);

    if(n>=10 && n<100)
        printf("%d is two digit number",n);
    else
        printf("%d is not two digit number",n);

    return 0;
}   
