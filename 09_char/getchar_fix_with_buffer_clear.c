#include <stdio.h>

int main() {
    char a, b;

    printf("첫 번째 문자 입력: ");
    a = getchar();
    getchar();  // 버퍼에 남은 \n 제거

    printf("두 번째 문자 입력: ");
    b = getchar();

    printf("입력된 문자들: '%c', '%c'\n", a, b);
    return 0;
}
