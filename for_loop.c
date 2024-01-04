#include <stdio.h>


int main() 
{
    int x, sum = 0;

    for(x = 1; x <= 100; x++) {
        sum = sum + x;
        printf("%d \n", x);
        printf("The sum: %d \n", sum);
    }

    return 0;
}