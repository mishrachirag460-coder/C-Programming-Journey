#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter  Your selling price  : ");
    scanf("%d",&sp);
    printf("Enter  Your cost price  : ");
    scanf("%d",&cp);
    if(sp>cp)
    {
      printf("Profit ");
    }
    else if (sp==cp)
    {
     printf("No Profit No Loss");
    }
    else 
    printf("Loss");
    return 0;
}
