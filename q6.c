#include <stdio.h>
int main() {
     int n,i = 1,sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    printf("Odd natural numbers: \n");
    for (i = 1; i<=n; i++)
    {
        if (i%2 == 0)
      {
        printf("");
      }
      else
      {
        printf("Number: %d \n",i);
        sum += i;
        
      }
    }
    printf("sum of n odd natural no: %d",sum);
    return 0;
}