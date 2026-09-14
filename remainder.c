#include<stdio.h>
int main()
{
     int a,b,remainder;
     printf("Enter first Number = ");
     scanf("%d",&a);
     printf("Enter second Number = ");
     scanf("%d",&b);
     remainder=a%b;
     printf("Division of given Number \n%d %% %d = %d",a,b,remainder);
     return 0 ;
}
