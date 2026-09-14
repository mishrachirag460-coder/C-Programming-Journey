#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter Your Rectangle Length = ");
    scanf("%f",&a);
    printf("Enter Your Rectangle Breadth = ");
    scanf("%f",&b);
    area = a*b ;
    printf("Area of rectangle : \n%f × %f = %f ",a,b,area);
    return 0 ;
}
