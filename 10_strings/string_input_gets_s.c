// 📄 string_input_gets_s.c
#include <stdio.h>

int main() {
    char input[10];

    printf("문자열 입력 (gets_s 사용): ");
    gets_s(input, sizeof(input));  // ✅ 버퍼 크기 준수, 초과 시 런타임 오류 발생
    
    printf("입력한 문자열: %s\n", input);
    return 0;
}
