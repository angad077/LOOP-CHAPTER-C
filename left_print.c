#include <stdio.h>

int main()
{
    int i, j, k;
    // printf("Enter your stars\n");
    // scanf("%d",&n);

    for (i = 1; i <= 5; i++) //ROWS

    {
        for (j = i; j < 5; j++) // space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}