#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int m = 1;
	int i = 0;
	int sum = 0;
	printf("请输入一个数字：");
	scanf("%d", &i);
	for (n = 1; n <= i; n++)
	{
	
			m = m * n;
	
		sum = sum + m;
	}

	printf("答案是%d\n", sum);
	return 0;
}
//int main()
//{
//	int n = 0;
//	int m = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &i);
//	for (n = 1; n <= i; n++)
//	{
//		for (j = 1,m = 1; j <= n; j++)
//		{
//			m = m * j;
//		}
//		sum = sum + m;
//	}
//	
//	printf("答案是%d\n", sum);
//	return 0;
//}