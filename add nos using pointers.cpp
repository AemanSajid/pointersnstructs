#include <stdio.h>

void addNumbers(int* num1, int* num2, int* result) {
    *result = *num1 + *num2;
}

int main() {
    int num1, num2, result;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    addNumbers(&num1, &num2, &result);
    
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}

