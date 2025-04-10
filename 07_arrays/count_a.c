#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') count++;
    }

    printf("'a'의 개수: %d\n", count);
    return 0;
}
