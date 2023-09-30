#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,flag,st=20,end=200;
    for(n=st;n<=end;n++)
    {
        flag=1;
        for(i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && n>0)
        {
            printf("%d ",n);
        }
    }
    return 0;
}