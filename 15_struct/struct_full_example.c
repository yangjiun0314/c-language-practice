#include <stdio.h>
#include <string.h>

struct Student {
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
};

int main(void) {
    struct Student s;
    strcpy(s.studentId, "201502152");
    strcpy(s.name, "에렌");
    s.grade = 2;
    strcpy(s.major, "정치외교학과");

    printf("학번: %s\n", s.studentId);
    printf("이름: %s\n", s.name);
    printf("학년: %d학년\n", s.grade);
    printf("전공: %s\n", s.major);

    return 0;
}
