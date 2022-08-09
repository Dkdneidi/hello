#include<stdio.h>
#include<windows.h>

//enum 열거형자료형명
//{
//자료값1,
// 자료값2..
// 자료값n
//}
enum e과목
{
	국어  =0,
	영어,
	수학,
	과학
};
int main()
{
	//{
	//putchar('1');
	//puts("안녕하세여");
	//printf("안녕하세여~ 저는 %s입니다.\n나이는 %d입니다.","홍길동",18);
	// 입력서식 %d, %s, %f, %c, %u
	//    정수, 문자열, 실수, 문자, 부호가없는 정수
	//printf("-19=%d, -19=%u", -19, -19);
	//문자는 '', 문자열은""
	//%f는 6자리까지, %1.2f하면소숫점2자리, 1.3이면3자리, 짤리면 반올림
	//printf("원주율운 %1.2f이다", 3.1415f);

	//입력문3가지
	//getchar,gsts_s scanf_s
	//char buffer[225] = { 0, };
	//int num = 0;
	//printf("입력하세요:");/
	//putchar(getchar());
	//gets_s(buffer, sizeof(buffer));
	//puts(buffer);
	//scanf_s("%s %d", buffer, sizeof(buffer),&num);
	//printf("%s %d", buffer,num);

	//자료형은 변수와 상수로 나누어진다.
	//printf("1+1=%d\n'", 1 + 1);
	//자료형키워드 변수명;
	//c언어는 자료형이 4가지
	//정수형, 문자형, 실수형, 열거형
	//정수형(int) 문자형(char) 실수형(float) 열거형(enum)

	/* 정수형 int number = 0;  //변수 선언
	int su = 10; //변수 선언과 초기화

	printf("number=%d, su=%d\n", number, su);*

	/* 문자하나 char charac = 'a';
	printf("charac=%c\n", charac);*/

	/* 실수형 float fnum = 3.14f;
	printf("fnum=%1.2f\n", fnum);*/

	/* 문자열 char* name = "홍길동";  *해도되고
	char buffer[] = "김펄수"; []해도됨
	printf("name=%s buffer=%s\n", name, buffer);*/

	/*enum e과목 subject = 영어;
	printf("subject=%d", subject);*/

	/// 128 64 32 16 8 4 2 1
	//  0   0  0  0 0 0 0 0 1바이트


	system("pause");
	return 0;
		
	}
	