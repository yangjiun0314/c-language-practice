#include <stdio.h>

int main() {
    if (1) {
        int local = 42;  // 지역 변수 (if문 안에서만 사용 가능)
        printf("Local Variable inside if: %d\n", local);
    }

    // printf("%d", local); // ❌ 컴파일 에러: 지역 변수는 블록 바깥에서 접근 불가
    return 0;
}
