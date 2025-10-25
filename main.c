// main.c
#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));

    return 0;
}
