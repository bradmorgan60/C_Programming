#include <stdio.h>

/*
Write a program in C to read 10 numbers from the keyboard and find their sum and average.

Test Data :
Input the 10 numbers :
Number-1 : 2
...
Number-10 : 2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000
*/

int main() 
{
    int x, n, sum = 0;
    float avg;

    printf("Input the 10 numbers: \n");

    for(x = 1; x <= 10; x++) {
        printf("Number %d : ", x);
        scanf("%d", &n);
        sum += n;

        // printf("%d", n);s

    }

    // avg = sum / 10;

    printf("%d numbers were entered: \n", x);

    printf("Sum: %d \n", sum);
    printf("Average: %f \n", avg);
    
    return 0;
}