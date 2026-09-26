#include<stdio.h>
int main()
{
    int n;
    printf("Enter  Your age : ");
    scanf("%d",&n);
    if(n>18)
    {
      printf("Eligible for voting ");
    }
    else if (n==18)
    {
     printf("Eligible for voting");
    }
    else 
    printf("Not Eligible");
    return 0;
}
