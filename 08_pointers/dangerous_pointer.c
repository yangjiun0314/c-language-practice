#include <stdio.h>

int main() {
    int *a = (int *)0x1403410;  // 실제 메모리에 접근하는 위험한 코드
    *a = 0;
    return 0;
}
