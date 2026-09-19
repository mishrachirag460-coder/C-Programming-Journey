#include<stdio.h>
int main()
{
int n;
printf("Enter Your year = ");
scanf("%d",&n);
if(n%400==0 || n%4==0 && n%100!=0)
printf("This is Leap Year");
else
printf("This is not Leap Year");

return 0 ; 

}
