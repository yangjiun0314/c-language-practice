#include <stdio.h>

int main() {
    char a, b;

    printf("첫 번째 문자 입력: ");
    a = getchar();

    printf("두 번째 문자 입력: ");
    b = getchar();  // 개행 문자(\n)를 입력받음

    printf("입력된 문자들: '%c', '%c'\n", a, b);
    return 0;
}
