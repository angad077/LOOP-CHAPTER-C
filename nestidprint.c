#include <stdio.h>

int main()
{
    int i, j;
    // printf("Enter your stars\n");
    // scanf("%d",&n);
    

    for (i = 1; i <= 5; i++) //ROWS
        
    {
        for (j = 1; j <= i; j++)// COLUMS
        {
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}