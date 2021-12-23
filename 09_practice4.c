#include <stdio.h>

int main()
{
    int i=0, sum = 0, n;
    printf("Enter your n \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
        printf("your sum is %d\n", sum);
    return 0;
}