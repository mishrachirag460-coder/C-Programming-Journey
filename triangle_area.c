#include<stdio.h> 
int main()
{
    float h,b,area;
    printf("Enter Your triangle height = ");
    scanf("%f",&h);
    printf("Enter Your triangle base = ");
    scanf("%f",&b);
    area = (b*h)/2;
    printf("Area of triangle : %f ",area);
    return 0 ;
}
