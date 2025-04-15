#include <stdio.h>

int main() {
    int a[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    int (*p)[5] = a; // 2차원 배열의 첫 번째 행에 대한 포인터

    for (int i = 0; i < 5; i++) {
        printf("p[0][%d] = %d\n", i, p[0][i]); // 첫 번째 행 출력
    }

    return 0;
}
