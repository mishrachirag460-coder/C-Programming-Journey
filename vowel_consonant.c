#include<stdio.h>

int main()
{
    char ch;

    printf("Enter Your letter = ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("%c is the vowel", ch);
        }
        else
        {
            printf("%c is the consonant", ch);
        }
    }
    else
    {
        printf("Please enter an alphabet");
    }

    return 0;
}
