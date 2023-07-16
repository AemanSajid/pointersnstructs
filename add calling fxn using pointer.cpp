#include <stdio.h>

void add(int a, int b) {
    int result = a + b;
    printf("The sum is: %d\n", result);
}

int main() {
    void (*funcPtr)(int, int);  // Function pointer declaration

    funcPtr = add;  // Assigning the address of add() to the function pointer

    (*funcPtr)(5, 7);  // Calling the function using the function pointer

    return 0;
}

