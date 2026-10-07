#include<stdio.h>
int main()
{
  int n;
  printf("Enter Your attendance percentage : ");
  scanf("%d",&n);

  if(n>=75 && n<=100)
  printf("Eligible for exam");
  else if(n>=0 && n<75)
  printf("Not eligible for exam");
  else
  printf("Invalid attendance");

  return 0;
}
