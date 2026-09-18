//***********************
//13-2 과제 제출(수업시간에 썼던 코드 일부와 예제들을 푼 것)
//2026년 9월 18일
//2600142 이수호
//***********************


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
	////포인터 배열
	//int* arr[10];//int를 가리키는 주소 10개가 있다는 소리

	////더 자세히 보자면
	//int a = 10, b = 20, c = 30, d = 40, e = 50;
	//int* api[5] = { &a, &b, &c, &d, &e };//40바이트이다, 포인터 변수(8바이트) 다섯 개


	//실습과제2
	//char arr[11];
	//printf("문자열을 입력하시오: ");
	//scanf("%s", arr);

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d번째 문자 %c, ", i+1, arr[i]);
	//}


//	//실습과제3(이건 진짜 어려워서 AI 도움을 좀 받았습니다..))
//	char str[100];
//	scanf("%s", str);
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] = str[i] - ('a' - 'A');
//		}
//		else if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] = str[i] + ('a' - 'A');
//		}
//	}
//
//	printf("%s\n", str);
//
//	return 0;
//	
//
//	//실습과제4
//
//	char str1[100];
//	char str2[100];
//
//	printf("문자열을 입력하시오: ");
//	scanf("%s", str1);
//
//	printf("문자열을 입력하시오: ");
//	scanf("%s", str2);
//
//	if (str1[0] <= str2[0]) {
//		printf("사전에서 앞에나오는 문자열:%s\n", str1);
//	}
//	else {
//		printf("사전에서 앞에나오는 문자열:%s\n", str2);
//	}
//
//	return 0;
//}




//실습과제5(이것도 너무 어려워서 도움을 좀 받았습니다..)
#include <stdio.h>

int main(void)
{
    char* fruits[] = {"apple", "blueberry", "orange", "melon"};
    int count = sizeof(fruits) / sizeof(fruits[0]);

    int min_index = 0;

    for (int i = 1; i < count; i++) {
        if (fruits[i][0] < fruits[min_index][0]) {
            min_index = i;
        }
    }

    printf("사전에서 제일 앞에 나오는 문자열: %s\n", fruits[min_index]);

    return 0;
}
