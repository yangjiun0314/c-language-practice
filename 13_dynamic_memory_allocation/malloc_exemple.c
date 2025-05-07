#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(sizeof(int));
    if (ptr == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    *ptr = 42;
    printf("할당된 값: %d\n", *ptr);

    free(ptr); // 해제 필수
    return 0;
}