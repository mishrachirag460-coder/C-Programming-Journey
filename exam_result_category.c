#include<stdio.h>
int main()
{
  int n;
  printf("Enter Your marks : ");
  scanf("%d",&n);

  if(n<0 || n>100)
  printf("Invalid marks");
  else if(n>=40 && n<60)
  printf("Pass");
  else if(n>=60 && n<75)
  printf("First Division");
  else if(n>=75 && n<90)
  printf("Distinction");
  else if(n>=90)
  printf("Outstanding");
  else
  printf("Fail");

  return 0;
}
