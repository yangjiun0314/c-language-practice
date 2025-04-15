#include <stdio.h>

void add(int* a, int* b) {
    *a += *b;
    printf("Inside add(): *a = %d\n", *a);
}

int main() {
    int x = 5, y = 3;
    add(&x, &y);  // 주소를 전달함으로써 원본 값을 변경
    printf("Outside add(): x = %d\n", x);  // x 값이 실제로 변경됨
    return 0;
}
