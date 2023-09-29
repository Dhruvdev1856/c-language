#include<stdio.h>
#include<conio.h>

int main()
{
    char var;
    puts("Enter any char:");
    // & = ampersand address of the variable
    var=getchar();
    //scanf("%c", &var);
    printf("\nThe entered char = %c", var);
    return 0;
}