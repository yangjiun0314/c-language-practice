#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]의 주소: %p\n", i, &arr[i]);
    }
    return 0;
}
