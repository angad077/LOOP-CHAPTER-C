// DO WHILE LOOP EXECUTE THE CODE AND THEN CHECK THE CONDITION
#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf(" Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf(" the value of i is %d \n ", i+1);
        i++;

    } while (i <= n);
    return 0;
}