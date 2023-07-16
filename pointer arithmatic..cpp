#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;  // Assigning the address of the first element to the pointer

    // Accessing array elements using pointer arithmetic
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Incrementing the pointer
    printf("\nIncrementing the pointer using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *ptr);
        ptr++;  // Incrementing the pointer to the next element
    }

    // Decrementing the pointer
    printf("\nDecrementing the pointer using pointer arithmetic:\n");
    ptr = &arr[4];  // Resetting the pointer to the last element
    for (int i = 4; i >= 0; i--) {
        printf("Element %d: %d\n", i, *ptr);
        ptr--;  // Decrementing the pointer to the previous element
    }

    return 0;
}


