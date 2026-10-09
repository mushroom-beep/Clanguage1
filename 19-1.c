#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//함수의 자료형
//(반환형(매개변수 자료형1, 매개변수 자료형2))

//함수 sum의 자료형 -> int(int, int) == 함수의 자료형

//sum의 자료형 -> (int(int, int))* -> int냐 (*)(int, int) == 함수명의 자료형

//예제 2번
//int big(int a, int b);
//int small(int a, int b);
//int get_value(int* a, int (*fp)(int, int));
//int main()
//{
//	int arr[5] = { -1, 2, 10, 5,7 };
//	int res;
//	res = get_value(arr, big);
//	printf("결과값은 : %d\n", res);
//	Res = get_value(arr, small);
//	printf("결과값은 : %d\n", res);
//	return 0;
//}
//
//int get_value(int* a, int (*fp)(int, int))
//{
//	int res = a[0];
//	for (int i = 1; i < 5; i++)
//		if (fp(res, a[i])) res = a[i]; // 함수포인터로 함수호출
//	return res;
//}
//int big(int a, int b)
//{
//	if (a > b) return 1;
//	else return 0;
//}
//int small(int a, int b)
//{
//	if (a > b) return 0;
//	else return 1;
//}






//예제 3번
//int compare1(const int* a, const int* b);
//int compare2(const int* a, const int* b);
//int main() {
//	int data[10] = { 21, 10, 41, 33, 25, 17, 68, 27, 14, 29 };
//	qsort(data, 10, sizeof(int), compare1); 
//	for (int i = 0; i < 10; i++) printf("%d ", data[i]);
//	printf("\n");
//	qsort(data, 10, sizeof(int), compare2); 
//	for (int i = 0; i < 10; i++) printf("%d ", data[i]);
//	return 0;
//}
//
//int compare1(const int* a, const int* b)
//{
//	return (*a - *b);
//}
//int compare2(const int* a, const int* b)
//{
//	return (*b - *a);
//}





//예제 4번
//int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2));
//int OlderFirst(int age1, int age2);
//int YoungerFirst(int age1, int age2);
//int main(void)
//{
//	int age1 = 20, age2 = 30;
//	int first;
//	printf("입장순서 1 \n");
//	first = WhoIsFirst(age1, age2, OlderFirst);
//	printf("%d세와 %d세 중 %d세가 먼저 입장한다 \n\n", age1, age2, first);
//	printf("입장순서 2 \n");
//	first = WhoIsFirst(age1, age2, YoungerFirst);
//	printf("%d세와 %d세 중 %d세가 먼저 입장한다 \n\n", age1, age2, first);
//	return 0;
//}
//
//int OlderFirst(int age1, int age2)
//{
//	if (age1 > age2) return age1;
//	else if (age1 < age2) return age2;
//	else return 0;
//}
//int YoungerFirst(int age1, int age2)
//{
//	if (age1 < age2) return age1;
//	else if (age1 > age2) return age2;
//	else return 0;
//}
//int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
//{
//	return cmp(age1, age2);
//}





//void 포인터
//포인터는 기본적으로 가리키는 변수의 자료형이 따로 정해져있다.(int형 자료형, char형 자료형 등등)
//그렇기에 포인터 변수는 수가 매우 많아질 수 밖에 없는데, 이는 void 포인터가 해결해준다.
//void는 가리키는 주소가 정해져있지 않다는 의미이므로, 모든 자료형을 저장 가능하다. 심지어는 함수의 자료형(int (*)(int, int) 같은 거)까지 저장할 수 있다.
//그리고 void '포인터' 니까 당연히 주소도 저장 가능하다. 어떤 자료형의 주소든지 상관 없다.
