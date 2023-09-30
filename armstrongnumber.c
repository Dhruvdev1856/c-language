#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    long int n1,n,r,sum=0,digit=0;
    printf("please enter number which need to check :");
    scanf("%ld",&n1);
    n=n1;
    sum=0;
    digit=0;
    while(n != 0)
    {
        n = n/10;
        digit++;
    }
    n=n1;
    while(n != 0)
    {
        r = n % 10 ;
        printf("\nvalue of r %ld",r);
        sum = sum + pow(r,digit);
        n = n/10;
        printf("\nvalue of sum %ld",sum);
    }
    if(sum==n1)
    {
        printf("the given number %ld is armstrong number",n1);
    }
    else
    {
        printf("\nthe given number is not armstrong number");
    }
    return 0;
}