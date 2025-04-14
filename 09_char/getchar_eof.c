#include <stdio.h>

int main() {
    int ch;

    printf("문자를 계속 입력하세요 (Ctrl+Z 또는 Ctrl+D로 종료):\n");

    while ((ch = getchar()) != EOF) {
        printf("입력된 문자: %c\n", ch);
    }

    printf("입력 종료!\n");
    return 0;
}
