//14-2장 문제 풀이와 수업 수강 기록
//날짜: 2026/9/30
//2600142 이수호



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void ShowArray(int* param, int len);
//int main()
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 4, 5, 6, 7, 8 };
//	ShowArray(arr1, 3);
//	ShowArray(arr2, 5);
//}
//
//void ShowArray(int* param, int len)
//{
//	for (int i=0; i < len; i++)
//	{
//		printf("%d ", *(param+i));
//	}
//	printf("\n");
//}


//실습과제 2번
//int get_max(int* array, int n);
//int main()
//{
//	int grade[5];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("성적을 입력하시오: ");
//		scanf("%d", &grade[i]);
//	}
//	int max = get_max(grade, 5);
//	printf("최대값은 %d입니다.", max);
//	return 0;
//}
//
//int get_max(int* array, int n)
//{
//	int max = *array;
//	for (int i = 1; i < n; i++)
//	{
//		if (max < *(array + i))
//		{
//			max = *(array + i);
//		}
//	}
//	return max;
//}



//실습과제 3번
//int get_data(int* array, int n);
//int main()
//{
//	int data[5], i;
//	get_data(data, 5);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d번째 데이터: %d\n", i + 1, data[i]);
//	}
//}
//
//int get_data(int* array, int n)
//{
//	for (int j = 0; j < n; j++)
//	{
//		printf("정수를 입력하시오: ");
//		scanf("%d", &array[j]);
//	}
//	return 0;
//}

//실습과제 4번
//void jungso(double num, int* integer, double* sosubu);//주소값이 들어있는 변수만 받겠다는 소리이다. 고로 앰퍼샌드를 붙여야 값이 들어가진다.
//int main()
//{
//
//	int integer;
//	double sosubu;
//	double data;
//	printf("실수를 입력하시오: ");
//	scanf("%lf", &data);//앰퍼샌드(&)를 붙여 변수의 값 대신 변수의 주소값을 받아온다.
//
//	jungso(data, &integer, &sosubu);
//
//	printf("정수부: %d\n", integer);
//	printf("소수부: %.2lf\n", sosubu);
//}
//
//void jungso(double num, int* integer, double* sosubu)
//{
//	*integer = (int)num;
//	*sosubu = num - *integer;//integer는 지금 주소를 담고 있으므로, 포인터를 붙여 값을 불러오라는 의미로 쓴다.
//
//}


//문제 5번(14-2번의 2번으로)
void ShowData(const int* ptr)
{
	int* rptr = ptr;//이 부분이 잘못되었다! 이유는 분명 ptr은 const int*형으로 변경하면 안 됐지만 이 부분에서는 const int*에서 int*형으로 바꾸려고 했으므로 안 됨! 이렇게 하면 값을 변경하지 말라고 했음에도 값이 변경될 수 있으므로 이건 막힌다.
	printf("%d\n", *rptr);
	*rptr = 20;//이렇게 값 변경하려고 하는 거 막으려고 const를 쓴 것이다!
}

int main(void)
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);
	return 0;
}
