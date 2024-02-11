
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    ptr = calloc(size, sizeof(int)); // allocating space on the heap

    // printf("%p is the memmory address\n", ptr);

    for (int i = 0; i < size; i++) ptr[i] = i + 1;
    // ptr stores a memory address; we will dynamically allocate the memory based on the user input
    // the space contained in that address is dependent on the user input, as the user specifies the size of the array

    printf("ptr: %p\n", ptr);
    for (int i = 0; i < size; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    printf("%p was freed...\n", ptr);
    return 0;
}