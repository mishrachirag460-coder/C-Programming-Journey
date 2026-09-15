#include<stdio.h>
int main()
{
    int l,b,pr;
    printf("Enter your length :");
    scanf("%d",&l);
    printf("Enter your breadth :");
    scanf("%d",&b);
    pr = (l+b)*2;
    printf("Your Rectangle Perimeter = %d",pr);
    return 0;
}
