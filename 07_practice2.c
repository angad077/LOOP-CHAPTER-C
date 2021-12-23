#include <stdio.h>

int main()
{
    int i;
    int table;

    printf(" what is your table\n");
    scanf("%d", &table);
    printf("****Multiplication table of %d inverse is****\n\n", table);
    for (i = 10; i; i--)
    {
        printf("%d * %d = %d  \n", table, i, table * i);
    }
    return 0;
}