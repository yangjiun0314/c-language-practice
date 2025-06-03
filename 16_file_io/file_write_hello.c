#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char s[20] = "Hello World";
    FILE* fp;

    fp = fopen("temp.txt", "w");  // 파일 쓰기 모드로 열기
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    fprintf(fp, "%s\n", s);  // 문자열 파일에 쓰기
    fclose(fp);              // 파일 닫기

    return 0;
}
