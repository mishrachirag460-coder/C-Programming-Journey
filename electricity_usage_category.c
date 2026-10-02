#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your number = ");
    scanf("%d",&n);
    if(n>=0 && n<=100)
        printf("Low ussage");
    else if(n>=101 && n<=200)
        printf("Medium usage");
    else if(n>=201 && n<=300)
        printf("High usage");   
    else if(n>300)
        printf("Very high usage");     
    else
    printf("Invalid");
    return 0;
} 
