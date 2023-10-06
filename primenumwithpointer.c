#include <stdio.h>
#include <conio.h>

int Prime(int *num) 
{
    if (*num <= 1) 
    {
        return 0; 
    }  
    for (int i = 2; i <= *num / 2; i++) 
    {
        if (*num % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main() 
{
    int num;
    int *ptr;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    ptr = &num;

    if (Prime(ptr)) 
    {
        printf("%d is a prime number.\n", *ptr);
    } else 
    {
        printf("%d is not a prime number.\n", *ptr);
    }

    return 0;
}





