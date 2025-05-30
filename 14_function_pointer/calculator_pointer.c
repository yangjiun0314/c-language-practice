int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(void) {
    int(*fp)(int, int) = add;
    printf("%d\n", fp(10, 3)); // 13

    fp = sub;
    printf("%d\n", fp(10, 3)); // 7
    return 0;
}