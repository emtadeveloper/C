#include <cs50.h>
#include <math.h>
#include <stdio.h>

void mario(int n);
int main(void)
{
    int n = 0;
    while (n < 1 || n > 8)
    {
        n = get_int("Height : ");
    }
    mario(n);
}

void mario(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (n - i <= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" ");
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
