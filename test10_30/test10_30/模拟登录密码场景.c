//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i=0; i<3; i++)
//	{
//		printf("����������:");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)//==�����ñȽ��ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp,ͷ�ļ�string.h
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("��¼ʧ�ܣ��˳�����\n");
//	return 0;
//}