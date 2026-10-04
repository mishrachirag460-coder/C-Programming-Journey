#include<stdio.h>
int main()
{
  int n;
  printf("Enter Your number : ");
  scanf("%d",&n);

  if(n%4==0 || n%6==0)
  {
    printf("Number is divisible by 4 or 6");
  }
  else
  {
    printf("Number is not divisible by 4 or 6");
  }

  return 0;
}
