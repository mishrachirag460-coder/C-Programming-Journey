#include<stdio.h>
int main()
{
  float amount;

  printf("Enter Your Shopping Amount : ");
  scanf("%f",&amount);

  if(amount<1000)
  printf("No Discount");
  else if(amount>=1000 && amount<5000)
  printf("5%% Discount");
  else if(amount>=5000 && amount<10000)
  printf("10%% Discount");
  else
  printf("20%% Discount");

  return 0;
}
