#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter the cost and selling price of the product");
    scanf("%f %f",&a,&b);
    c=((b-a)/a)*100;
    printf("The profit percentage is %f",c);
    getch();
}
