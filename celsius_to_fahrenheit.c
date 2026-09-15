#include<stdio.h>
int main()
{
    float c,f;
    printf("enter your temperature in celcius :");
    scanf("%f",&c);
    f = (c * 9.0/5.0) + 32;
    printf("Your temperature in fahrenheit = %.2f ",f);
    return 0 ;
}
