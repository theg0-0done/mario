#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("height: ");

    do
    {
        n = get_int("give a positive number: ");
    }
    while (n < 1);

    // HEIGHT
    for (int i = 0; i < n; i++)
    {
        // NUMBER OF SPACES
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        // NUMBER OF '#' (1)
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");

        // NUMER OF '#' (2)
        for (int l = 0; l < i || l == i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
