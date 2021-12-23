#include <stdio.h>

int main()
{
    int i=0, sum = 0, n;
    printf("Enter your n \n");
    scanf("%d", &n);
    do{
         printf("your sum is %d\n", sum);
         sum+=i;
         i++;

    }while(i<=n);

    
        
    return 0;
}