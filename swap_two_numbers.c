#include<stdio.h> 
int main()
{
    int a,b,c;
    printf("Enter Your first number = ");
    scanf("%d",&a);
    printf("Enter Your second  number = ");
    scanf("%d",&b);
    printf("Number Before swap : %d  %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nNumber After swap : %d  %d",a,b);
    return 0 ;
}
