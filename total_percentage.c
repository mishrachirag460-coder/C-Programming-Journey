#include<stdio.h> 
int main()
{
    float s1,s2,s3,total,percentage;
    printf("Enter first subject number = ");
    scanf("%f",&s1);
    printf("Enter second subject number = ");
    scanf("%f",&s2);
    printf("Enter third subject number = ");
    scanf("%f",&s3);
    total = s1+s2+s3;
    printf("Your Total = %.2f\n",total);
    percentage = total/3;
    printf("Your percentage = %.2f%%",percentage);
    return 0 ;
}
