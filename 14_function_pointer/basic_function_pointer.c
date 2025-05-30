#include <stdio.h>

void myFunction() {
    printf("It's my function");
}

void yourFunction() {
    printf("It's you function");
}

int main(void) {
    void(*fp)() = myFunction;
    fp();               // myFunction 호출
    fp = yourFunction;
    fp();               // yourFunction 호출
    return 0;
}