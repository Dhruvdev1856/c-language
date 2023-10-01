#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    int a,b;
    printf("enter a to do addition \nenter m to do multiplication \nenter d for division \nenter your choice : ");
    scanf("%c",&ch);
    if( ch == 'a' || ch == 'm' || ch == 'd')
    {
        printf("please enter the value of a : ");
        scanf("%d",&a);
        printf("please enter the value of b : ");
        scanf("%d",&b);
    }
    switch(ch)
    {
        case 'a':
            printf("the addition of %d and %d is %d.",a,b,(a+b));
            break;
        case 'm':
            printf("the multiplication of %d and %d is %d.",a,b,(a*b));
            break;
        case 'd':
            printf("the division of %d and %d is %d.",a,b,(a/b));
            break;
    }
    return 0;
}