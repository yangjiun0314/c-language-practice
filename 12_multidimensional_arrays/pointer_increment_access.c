#include <stdio.h>

int main() {
    int arr[3] = {7, 8, 9};
    int *ptr = arr;

    // 증감 연산자를 이용한 접근
    printf("First value: %d\n", *ptr);
    ptr++;
    printf("Second value: %d\n", *ptr);
    ptr++;
    printf("Third value: %d\n", *ptr);

    return 0;
}
