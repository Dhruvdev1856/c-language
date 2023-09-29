#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum, count=0;
    for(n=1;n<=32000; n++)
    {
        sum = 0;
        for(i=1;i<n;i++)
        {
            if( (n%i) == 0)
            {
                sum = sum + i; // sum += i
            }
        }
        if(sum == n)
        {
            printf("%d ",n);
            count++;
        }
    }
    printf(" \ntotal number of count of perfect numbers = %d",count);
    return 0;
}
