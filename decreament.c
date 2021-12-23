#include <stdio.h>

int main()
{
    int i;
    int n;
    printf(" Enter the value of n \n");
    scanf("%d",&n);
    for (i = n; i; i--)
    {
        printf(" your value of i is %d \n ", i);
    }
    return 0;
}