#include <stdio.h>


int main(void) {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            printf("%d x %d = %d\t", i, j, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}