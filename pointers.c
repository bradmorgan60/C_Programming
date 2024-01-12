#include <stdio.h>

// Pointers

int main() {

    int num = 1;
    int * p_num = &num;

    printf("Memory address of integer %i: %p \n", *p_num, p_num);
    // printf("The address here %i", *p_num);

    

    return 0;
}