#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\nBefore Swap: a = %d, b = %d\n", a, b);

    // Swap using temp variable
    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b = %d", a, b);

    return 0;
}
