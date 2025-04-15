#include <stdio.h>

int main() {
    register int i = 100;  // 레지스터 변수 (레지스터에 저장되도록 요청)
    printf("Register variable: %d\n", i);

    // printf("%p", &i);  // ❌ 주소를 알 수 없음 (레지스터에 저장된 경우)
    return 0;
}
