#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//shutdown -s关机命令 -t 60关机时间控制 单位：秒  system()：执行系统命令的函数
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入“我是猪”，可以取消关机\n请输入：");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");//shutdown -a取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}