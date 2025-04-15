#include <stdio.h>

int main() {
    int arr[5] = {100, 200, 300, 400, 500};
    int *ptr = arr;

    // 주소와 값 출력
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", (ptr + i), *(ptr + i));
    }

    return 0;
}
