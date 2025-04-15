#include <stdio.h>

void countCalls() {
    static int count = 0;  // 정적 변수: 한 번만 초기화되고 유지됨
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    countCalls();  // 1
    countCalls();  // 2
    countCalls();  // 3
    return 0;
}
