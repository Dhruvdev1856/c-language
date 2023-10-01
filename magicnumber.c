#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int sum=0,r,n,n1;
    printf("please enter number which need to be check : ");
    scanf("%d",&n1);
    n=n1;
    while(n != 0)
    {
        r = n%10 ;
        sum = sum + r ;
        n = n/10;
        if( n==0 && sum >=10)
        {
            n=sum;
            sum=0;
        }
    }
    if(sum==1)
    {
        printf("the given number %d is magic number",n1);
    }
    else
    {
        printf("the given number %d is not magic number",n1);
    }
}