#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -s�ػ����� -t 60�ػ�ʱ����� ��λ����  system()��ִ��ϵͳ����ĺ���
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������롰������������ȡ���ػ�\n�����룺");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");//shutdown -aȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}