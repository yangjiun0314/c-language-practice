// 📄 string_functions.c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = "World";

    // 문자열 길이
    printf("strlen(str1): %zu\n", strlen(str1));

    // 문자열 비교
    printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));

    // 문자열 복사
    strcpy(str1, str2);
    printf("strcpy 후 str1: %s\n", str1);

    // 문자열 연결
    strcat(str1, " Again");
    printf("strcat 후 str1: %s\n", str1);

    // 부분 문자열 찾기
    if (strstr(str1, "Again") != NULL) {
        printf("부분 문자열 'Again'이 존재합니다.\n");
    }

    return 0;
}
