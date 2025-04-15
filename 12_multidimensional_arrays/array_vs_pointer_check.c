#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // 배열 이름은 상수, 주소 변경 불가
    // arr = arr + 1; // ❌ 컴파일 에러

    // 포인터는 변수이므로 주소 변경 가능
    ptr = ptr + 1; // ✅ 가능

    printf("arr[0] = %d\n", arr[0]);
    printf("ptr[0] = %d\n", ptr[0]);

    return 0;
}
