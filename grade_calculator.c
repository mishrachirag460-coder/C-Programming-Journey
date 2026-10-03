#include<stdio.h>
int main()
{
    int n;
    printf("Enter you percentage : ");
    scanf("%d",&n);
    if(n>=90 && n<=100)
    printf("A grade");
    else if(n>=75 && n<=89)
    printf("B grade");
    else if(n>=60 && n<=74)
    printf("C grade");
    else if(n>=40 && n<=59)
    printf("D grade");
    else if( n<40)
    printf("Fail");
    else 
    printf("Invalid");
    return 0;
}
