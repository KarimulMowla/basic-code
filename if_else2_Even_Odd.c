#include <stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}