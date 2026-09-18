#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Your first number = ");
    scanf("%d",&a);
    printf("Enter Your second number = ");
    scanf("%d",&b);
    if(a>b)
    {
     printf("%d is the largest number",a);
    }
    else if(a==b)
     printf("Both Numbers are equal");
    else
    printf("%d is the largest number",b);
    return 0 ;
}
