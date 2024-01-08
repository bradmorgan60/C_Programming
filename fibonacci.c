#include <stdio.h>

/*
Write a program in C to display the first n terms of the Fibonacci series.
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34
*/

int main() {

    int num, x = 0, y = 1, z, i;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    for(i = 3; i <= num; i++) {
        z = x + y;  // 1 = 0 + 1, then loop will begin
        printf("%5d", z);
        x = y; // update previous terms
        y = z; // update current term

    }
    printf("\n");
    return 0;
}