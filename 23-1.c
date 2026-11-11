#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>







typedef struct {
	char name[100];
	int age;
}Student;

int main() {
	Student arr[3];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", arr[i].name);
		printf("나이를 입력하시오: ");
		scanf("%d", arr[i].age);
	}

	printf("가장 먼저 입력된 사람의 이름은 %s, 가장 먼저 입력된 사람의 성적은 %d", arr[0].name, arr[0].age);
	return 0;
}
