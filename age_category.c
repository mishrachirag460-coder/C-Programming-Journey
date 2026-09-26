#include<stdio.h>
int main()
{
  int n;
  printf("Enter age :");
  scanf("%d",&n);
  if(n>=1 && n<=12)
  {
    printf("Child");
  }  
    else if(n>=13 && n<=19)
    {
      printf("Teenager");
    }
    else if(n>=20 )
     {
      printf("Adult");  
     } 
    else
     {
       printf("Invalid age ");
     }  
  return 0;
}
