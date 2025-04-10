#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a;

    printf("a의 값: %d\n", a);
    printf("b가 가리키는 값: %d\n", *b);
    printf("a의 주소: %p\n", &a);
    printf("b의 값(주소): %p\n", b);
    return 0;
}
