#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any two numbers which you want to swap:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The swaped values are %d and %d",a,b);
    return 0;
    getch();
    }

