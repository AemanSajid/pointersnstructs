#include <stdio.h>

int* sumOfNumbers(int num1, int num2) {
    int sum = num1 + num2;
    int* ptr = &sum;
    return ptr;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int* result = sumOfNumbers(num1, num2);
    
    printf("The sum is: %d\n", *result);
    
    return 0;
}


