#include<stdio.h>
int main()
{
  int n;
  printf("Enter Your speed : ");
  scanf("%d",&n);

  if(n<0)
  printf("Invalid speed");
  else if(n<=40)
  printf("Slow");
  else if(n<=80)
  printf("Normal");
  else if(n<=120)
  printf("Fast");
  else
  printf("Very Fast");

  return 0;
}
