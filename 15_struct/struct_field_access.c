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
    strcpy(s.name, "지크 예거");
    s.grade = 1;
    strcpy(s.major, "정치외교학과");
}
