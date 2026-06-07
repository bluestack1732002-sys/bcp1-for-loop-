#include <stdio.h>
int main() {
    int n,temp,temp1,count = 0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    temp = n;
    temp1 = n;
    for(;temp>0;count++){
        temp/=10;
        
    }
    printf("count: %d\n",count);
    int times,r,sum = 0,p=1;
    times = count;
    for (;temp1>0;){
         r = temp1 % 10;
        temp1/=10;
        for(;times>0;){
            p = p*r;
            times--;
        }
        sum += p;
        times = count;
        p = 1;
    }
    printf("sum :%d\n",sum);
if (sum == n)
{
    printf("%d is Armstrong number\n.",n);
}
else{
    printf("Not an Armstrong number\n.",n);
}
    return 0;
}