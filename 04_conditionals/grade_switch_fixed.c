#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  printf("학점을 입력하세요: ");
  char grade;
  scanf("%c", &grade);
  switch (grade) {
    case 'A': printf("A 학점입니다.\n");
      break;
    case 'B': printf("B 학점입니다.\n");
      break;
    case 'C': printf("C 학점입니다.\n");
      break;
    default: printf("학점을 바르게 입력하세요.\n");
  }
  system("pause");
  return 0;
}