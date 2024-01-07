#include <stdio.h>

int main() {
    int x, j;

    printf("Input the number to be calculated: ");
    scanf("%d", &x);

    for(j=1; j <= x; j++) {
        printf("%d X %d = %d \n", x, j, j*x);
    }

    return 0;
}