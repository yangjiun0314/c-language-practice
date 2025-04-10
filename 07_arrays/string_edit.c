#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello World";
    int n = 6;
    str[n] = 'X';
    printf("수정된 문자열: %s\n", str);
    return 0;
}
