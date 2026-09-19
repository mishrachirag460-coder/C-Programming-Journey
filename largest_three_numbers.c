#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Your first number = ");
    scanf("%d",&a);
    printf("Enter Your second number = ");
    scanf("%d",&b);
    printf("Enter Your third number = ");
    scanf("%d",&c);
    if(a==b && a==c ) 
    printf("All are equal");
    else if( (a>b) && (a>c) )
    printf("%d is the largest number ",a);
    else if( (b>a) && (b>c) )
    printf("%d is the largest number ",b);
    else 
    printf("%d is the largest number",c);
     
    return 0 ;
}
