#include <stdio.h>
int main() {
    int n,sum = 0,i;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for ( i = 1; i < n; i++)
    {
        if (i%2==0)
        {
            sum += i;
        }
        
    }
    printf("Sum of upto nth even natural numbers: %d", sum);
    
    return 0;
}