int add(int a, int b) {
    return a + b;
}

// 함수 포인터를 반환하는 함수
int (*process(char* a))(int, int) {
    printf("%s\n", a);
    return add;
}

int main(void) {
    printf("%d\n", process("10과 20을 더한 값을 출력합니다. ")(10, 20));
    return 0;
}