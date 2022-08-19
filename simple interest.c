#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,i;
    printf("Enter the principle amount , rate of interest and time.");
    scanf("%f %f %f",&p,&r,&t);
    i=p*r*t/100;
    printf("The simple interest is %f",i);
    getch();
}
