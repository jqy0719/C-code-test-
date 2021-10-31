#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//试除法
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = a; i <= b; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n共计%d个", count);
	return 0;
}