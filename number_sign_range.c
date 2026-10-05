#include<stdio.h>
int main()
{
  int n;
  printf("Enter Number ");
  scanf("%d",&n);

  if(n>=0 && n<=50)
  printf("Small Positive");
  else if(n>=51 && n<=100)
  printf("Medium Positive");
  else if(n>100)
  printf("Large Positive");
  else
  printf("Negative Number");

  return 0;
}
