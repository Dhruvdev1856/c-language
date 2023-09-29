#include<stdio.h>
#include<conio.h>

int main()
{
    int i,start, end,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end: ");
    scanf("%d", &end);
    /* 5 X 1 = 5
    5 X 2 = 10 */
    for(i=start;i<=end;i++)
    //initialization(it will happen only once); condition; inc dec.*/
    {
    printf("\n%d X %d = %d",n,i,n*i);
    }
    return 0;
}