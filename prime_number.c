// CHECK WHEATHER NUMBER IS PRIME OR NOT
// PRIME --> A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself.
#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf(" Enter your number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    return 0;
}