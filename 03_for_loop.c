#include <stdio.h>

int main(){
    int a=0;
    int n;
    printf("Enter tha value of n\n");
    scanf("%d", &n);
    for(a=0;a<n;a++){
        // printf(" the value of a is %d\n", a);
        printf(" the value of a is %d\n", a+1);
    }
    return 0;
}