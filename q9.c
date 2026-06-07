#include <stdio.h>
int main() {
    int n, i, j, square_of_number, sum = 0;
    printf("Enter an Integer of which youn want to cube and up to that: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        square_of_number = i*i;
       printf("%d, \n", square_of_number);
    }
    for(j =1; j<=n;j++){
        sum += j*j;
    }
    printf("Sum of square of n natural numbers: %d\n", sum);
    return 0;
}