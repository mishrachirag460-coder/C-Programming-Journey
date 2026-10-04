#include<stdio.h>
int main()
{
  int n;
  printf("Enter Your profit percentage : ");
  scanf("%d",&n);

  if(n>=0 && n<=10)
  {
    printf("Low Profit");
  }
  else if(n>=11 && n<=20)
  {
    printf("Medium Profit");
  }
  else if(n>=21 && n<=50)
  {
    printf("High Profit");
  }
  else if(n>50)
  {
    printf("Very High Profit");
  }
  else
  {
    printf("Loss");
  }

  return 0;
}
