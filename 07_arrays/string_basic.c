#include <stdio.h>

int main() {
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);  // 공백 전까지 입력됨
    printf("입력한 문자열: %s\n", str);
    return 0;
}
