#include<stdio.h>
#include<windows.h>

//enum �������ڷ�����
//{
//�ڷᰪ1,
// �ڷᰪ2..
// �ڷᰪn
//}
enum e����
{
	����  =0,
	����,
	����,
	����
};
int main()
{
	//{
	//putchar('1');
	//puts("�ȳ��ϼ���");
	//printf("�ȳ��ϼ���~ ���� %s�Դϴ�.\n���̴� %d�Դϴ�.","ȫ�浿",18);
	// �Է¼��� %d, %s, %f, %c, %u
	//    ����, ���ڿ�, �Ǽ�, ����, ��ȣ������ ����
	//printf("-19=%d, -19=%u", -19, -19);
	//���ڴ� '', ���ڿ���""
	//%f�� 6�ڸ�����, %1.2f�ϸ�Ҽ���2�ڸ�, 1.3�̸�3�ڸ�, ©���� �ݿø�
	//printf("�������� %1.2f�̴�", 3.1415f);

	//�Է¹�3����
	//getchar,gsts_s scanf_s
	//char buffer[225] = { 0, };
	//int num = 0;
	//printf("�Է��ϼ���:");/
	//putchar(getchar());
	//gets_s(buffer, sizeof(buffer));
	//puts(buffer);
	//scanf_s("%s %d", buffer, sizeof(buffer),&num);
	//printf("%s %d", buffer,num);

	//�ڷ����� ������ ����� ����������.
	//printf("1+1=%d\n'", 1 + 1);
	//�ڷ���Ű���� ������;
	//c���� �ڷ����� 4����
	//������, ������, �Ǽ���, ������
	//������(int) ������(char) �Ǽ���(float) ������(enum)

	/* ������ int number = 0;  //���� ����
	int su = 10; //���� ����� �ʱ�ȭ

	printf("number=%d, su=%d\n", number, su);*

	/* �����ϳ� char charac = 'a';
	printf("charac=%c\n", charac);*/

	/* �Ǽ��� float fnum = 3.14f;
	printf("fnum=%1.2f\n", fnum);*/

	/* ���ڿ� char* name = "ȫ�浿";  *�ص��ǰ�
	char buffer[] = "���޼�"; []�ص���
	printf("name=%s buffer=%s\n", name, buffer);*/

	/*enum e���� subject = ����;
	printf("subject=%d", subject);*/

	/// 128 64 32 16 8 4 2 1
	//  0   0  0  0 0 0 0 0 1����Ʈ


	system("pause");
	return 0;
		
	}
	