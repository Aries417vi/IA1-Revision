#include <stdio.h>
#include <stdlib.h>

int input();
int main()
{
    int n = input();
    int i = 1;
    int sum = 0;

    while (i <= n)
    {
        sum += i;
        ++i;
    }

    printf("Sum of %d natural numbers = %d", n, sum);
    return 0;
}

int input(int x)
{
    printf("Enter number n = ");
    scanf("%d", &x);
    return x;
}