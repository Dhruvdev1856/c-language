#include <stdio.h>
#include <conio.h>

int Perfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        if (Perfect(num) == 1)
        {
            printf("%d is a perfect number.\n", num);
        }
        else
        {
            printf("%d is not a perfect number.\n", num);
        }
    }

    return 0;
}