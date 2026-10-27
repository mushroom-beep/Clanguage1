#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//예제 1: 문자 입출력

//int main()
//{
//	int ch1, ch2;
//	ch1 = getchar();
//	ch2 = fgetc(stdin);//엔터 키 입력
//
//	putchar(ch1);
//	fputc(ch2, stdout);
//	return 0;
//}
//
//
////예제 2번
//int main()
//{
//	int ch1, ch2;
//	ch1 = getchar();
//	getchar();
//	ch2 = fgetc(stdin);
//
//	putchar(ch1);
//	putchar('\n');
//	fputc(ch2, stdout);
//	return 0;
//}
//
//
////예제 3번: 문자 입출력에서의 EOF
//
//int main(void) {
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();
//		if (ch == EOF) break;
//		putchar(ch);
//	}
//	return 0;
//}
//
////예제 4번
//int main() {
//	char str[] = "Simple String";
//
//	printf("1. puts test------\n");
//	puts(str);
//	puts("So Simple String");
//
//	printf("2. fputs test-----\n");
//	fputs(str, stdout); printf("\n");//자동 줄바꿈 안 해줌
//
//	printf("3. end of main---\n");
//	return 0;
//}
//
//
////예제 5번
//
//int main() {
//	char str[12];
//	
//	for (int i = 0; i < 3; i++) {
//		gets(str);
//		printf("Read %d: %s \n", i + 1, str);
//	}
//	return 0;
//}


//에제 6번

int main() {
	char str[7];

	for (int i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}
