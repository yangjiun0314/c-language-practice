#include <stdio.h>

int main() {
    const char *arr[] = {"apple", "banana", "cherry"};
    const char **ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("ptr[%d] = %s\n", i, ptr[i]);
    }

    // 포인터 배열에 증감 연산자를 사용
    printf("First word first char: %c\n", **ptr);   // a
    (*ptr)++; // 문자열의 두 번째 문자로 이동
    printf("First word second char: %c\n", **ptr);  // p

    return 0;
}
