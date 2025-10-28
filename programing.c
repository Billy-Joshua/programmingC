#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return b != 0 ? a/b : 0; }

int main() {
    float x = 10, y = 5;
    printf("Add: %.2f\n", add(x,y));
    printf("Sub: %.2f\n", sub(x,y));
    printf("Mul: %.2f\n", mul(x,y));
    printf("Div: %.2f\n", div(x,y));
    return 0;
}