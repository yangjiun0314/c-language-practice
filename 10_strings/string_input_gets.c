// 📄 string_input_gets.c
#include <stdio.h>

int main() {
    char input[10];

    printf("문자열 입력 (gets 사용): ");
    gets(input);  // ❗ 버퍼 크기 초과 위험 있음
    
    printf("입력한 문자열: %s\n", input);
    return 0;
}
