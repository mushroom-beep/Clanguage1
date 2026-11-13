#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int id;
    int kor;
    int eng;
    int math;
    double avg;
}Student;

int main(void)
{
    Student s[3];
    int i, best = 0;

    for (i = 0; i < 3; i++) {
        printf("이름: ");
        scanf("%s", s[i].name);
        printf("학번: ");
        scanf("%d", &s[i].id);
        printf("국어 : ");
        scanf("%d", &s[i].kor);
        printf("영어 : ");
        scanf("%d", &s[i].eng);
        printf("수학 : ");
        scanf("%d", &s[i].math);

        s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 3.0;
        printf("\n");
    }

    for (i = 1; i < 3; i++) {
        if (s[i].avg > s[best].avg)
            best = i;
    }

    printf("<최우수 학생정보>\n");
    printf("%s %d %d %d %d %f\n",
        s[best].name, s[best].id,
        s[best].kor, s[best].eng, s[best].math,
        s[best].avg);

    return 0;
}
