#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

int main(void) {
    int n, sum = 0;
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    fscanf(fp, "%d", &n);

    Student *students = (Student*)malloc(sizeof(Student) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d", students[i].name, &students[i].score);
        sum += students[i].score;
    }

    fclose(fp);
    free(students);

    printf("점수 평균: %.2f\n", (double)sum / n);
    return 0;
}
