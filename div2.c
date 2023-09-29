#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    float ans;
    double d=sin(0);
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    ans=(float)a/b;
    printf("\nThe division of %d / %d = %.2f",a,b,ans);
    return 0;
}