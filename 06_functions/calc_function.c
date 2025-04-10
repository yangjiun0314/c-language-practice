#include <stdio.h>

int calculate(int a, int b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

int main(void) {
    int x = 12, y = 4;
    char op = '/';
    int result = calculate(x, y, op);
    printf("결과: %d\n", result);
    return 0;
}