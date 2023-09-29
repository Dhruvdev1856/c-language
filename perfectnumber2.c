#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("please enter any number which need to check : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if( (n%i) == 0)
        {
            sum = sum + i; // sum += i
        }
    }
    if(sum == n)
    {
        printf("\nthe number %d is perfect number",n);
    }
    else
    {
        printf("\nthe number %d is not perfect number",n);
    }
    return 0;
}