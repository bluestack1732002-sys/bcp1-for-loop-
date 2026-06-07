#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number till which you want to display natural numbers: ");
        scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d, ",i);
    }
    
    return 0;
}