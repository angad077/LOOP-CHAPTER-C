#include <stdio.h>

int main()
{
    int i = 1;
    int table;
    

    printf(" what is your table\n");
    scanf("%d", &table);
    printf("**Multiplication table of %d is**\n\n",table);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d \n", table, i, table * i);
    }
    return 0;
}