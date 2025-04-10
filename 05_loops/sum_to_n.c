#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, sum = 0;
    printf("n을 입력하세요: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    system("pasue");
    return 0;
}