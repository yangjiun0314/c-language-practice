#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void throwDice() {
    srand(time(NULL));
    int dice = rand() % 6 + 1;
    printf("주사위 결과: %d\n", dice);
}

int main(void) {
    throwDice();
    return 0;
}