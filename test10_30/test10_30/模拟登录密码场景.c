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
//		printf("请输入密码:");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)//==不能用比较字符串是否相等，应该使用一个库函数strcmp,头文件string.h
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("登录失败，退出程序\n");
//	return 0;
//}