#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  int size;
  printf("메인 메모리의 크기를 입력하세요: ");
  scanf("%d", &size);

  if (size >= 16) {
    printf("메인 메모리의 크기가 충분합니다.\n");
  }
  else {
    printf("메인 메모리의 크기가 부족합니다.\n");
  }

  system("pause");
  return 0;
}