#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("Enter three numbers");
    scanf("%f %f %f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("the average of the given numbers is %f",d);
    getch();
}
