#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    long int n1,n,r,start,end,sum,digit;
    printf("please enter starting point :");
    scanf("%ld",&start);
    printf("please enter ending point point :");
    scanf("%ld",&end);
    for(n1=start;n1<=end;n1++)
    {
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
            sum = sum + pow(r,digit);
            n = n/10;
        }
        if(sum==n1)
        {
            printf("the given number %ld is armstrong number",n1);
        }
    }
    return 0;
}