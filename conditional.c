#include <stdio.h>

// int main() {

//     int num1, num2;

//     printf("Enter your first number: ");
//     scanf("%d", &num1);

//     printf("Enter your second number: ");
//     scanf("%d", &num2);

//     if (num1 == num2)
//     {
//         printf("%d and %d are equal...", num1, num2);
//     }
//     else printf("%d and %d are not equal...", num1, num2);
    
//     return 0;
// }

int main() {

    int num1;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("%d is even \n", num1);
    } else printf("%d is odd \n", num1);
    

    return 0;
}