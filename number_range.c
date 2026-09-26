#include<stdio.h>
int main()
{ 
    printf("This Is Number Range Checking Under 1 to 100 ");
    int n;
    printf("Enter  Your Number  : ");
    scanf("%d",&n);
    if( n>0 && n<=100)
    {
      printf("Number is between 1 to 100 ");
    }
    else 
    printf("Number is Out of range ");
    return 0;
}
