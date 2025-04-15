#include <stdio.h>

int global = 10;  // 전역 변수

void showGlobal() {
    printf("Global Variable: %d\n", global);
}

int main() {
    showGlobal();
    global = 20;
    showGlobal();
    return 0;
}
