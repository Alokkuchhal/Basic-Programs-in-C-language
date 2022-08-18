#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("enter the radius of circle`");
    scanf("%f",&a);
    b=3.14*a*a;
    printf("area of the circle of radius %f is %f",a,b);
    getch();
    return 0;
}
