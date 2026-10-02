#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//실습과제 3번
int main()
{
	int arr[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d열 %d행의 값을 입력하시오: ", i+1, j+1);
			scanf("%d", arr[i][j]);
		}
	}


	int max = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}

	printf("최댓값은 %d", max);
}






//실습과제 4번
//int main()
//{
//	char arr[4][10];
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d번째 문자열 입력: ", i + 1);
//		scanf("%s", arr[i]);
//	}
//
//	int len = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; arr[i][j] != '\0'; j++)
//		{
//			len++;
//		}
//		printf("%d번째 문자열의 길이: %d\n", i + 1, len);
//		len = 0;
//	}
//}
