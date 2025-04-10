#include <stdio.h>
#include <limits.h>

int main() {
    int arr[5] = {10, 20, 35, 5, 12};
    int max = INT_MIN;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("최댓값: %d\n", max);
    return 0;
}
