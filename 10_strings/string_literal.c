// 📄 string_literal.c
#include <stdio.h>

int main() {
    // 문자열 리터럴 (읽기 전용 메모리에 저장)
    char *str = "Hello World!";
    
    printf("전체 문자열 출력: %s\n", str);
    printf("첫 번째 문자 출력: %c\n", str[0]); // H
    
    return 0;
}
