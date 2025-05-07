#include <stdio.h>
#include <stdlib.h>

int main() {
    int* data = (int*) malloc(sizeof(int) * 5);
    if (data == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        data[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }

    free(data);
    return 0;
}