#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10;
    printf("Enter the vlaue of a:"); scanf("%d",&a);

    if (a>0)
    {
        printf("\n %d is positive!",a);
    }
    if (a<0)
    {
        printf("\n %d is negative!",a);
    }
    if (a==0)
    {
    printf("\n %d is zero",a);
    }
}