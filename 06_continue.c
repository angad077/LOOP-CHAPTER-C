// CONTINUE LOOP
#include <stdio.h>

int main()
{
    int skip = 5, i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip) // continue to 5 and ignore while condition
        {
            continue;
        }
        else
        {
            printf(" Your value is %d\n", i);
        }
    }
    return 0;
}