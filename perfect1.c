#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("enter n value");
    scanf("%d", &n);
    i = 1;
    while (i < n)
    {

        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if (n == sum)
    {
        printf("it is perfect number...");
    }
    else
    {
        printf("it is not perfect number...");
    }
}