#include <stdio.h>

void add(int a, int b) {
    a += b;
    printf("Inside add(): a = %d\n", a);
}

int main() {
    int x = 5, y = 3;
    add(x, y);  // 함수 내에서는 새로운 복사본 생성
    printf("Outside add(): x = %d\n", x);  // x 값은 변경되지 않음
    return 0;
}
