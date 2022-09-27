#include<stdio.h>
#include<conio.h>
int main()
{   int N,i=1;
    printf("Enter a number:");
    scanf("%d",&N);
    while(N>=i)
    {
        printf("%d\n",N);
        N=N-1;
    }
    return 0;
    getch();
}
