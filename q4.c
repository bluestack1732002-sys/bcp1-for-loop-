#include <stdio.h>
int main() {
    int I, i, cube_of_number;
    printf("Enter an Integer of which youn want to cube and up to that: ");
    scanf("%d",&I);
    for(i = 1; i<=I; i++){
        cube_of_number = i*i*i;
       printf("%d, ", cube_of_number);
    }
    
    return 0;
}