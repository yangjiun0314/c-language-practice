#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "temp.h"

#define PI 3.141592653589793
#define POW(x) ((x) * (x))
#define ll long long
#define ld long double

int main(void) {
    int r = 10;
    int x = 5;
    ll a = 12345678900;
    ld b = 2.5;

    printf("3 + 4 = %d\n", add(3, 4));
    printf("원의 둘레: %.2f\n", 2 * PI * r);
    printf("x의 제곱: %d\n", POW(x));
    printf("곱셈 결과: %.1f\n", a * b);

    return 0;
}
