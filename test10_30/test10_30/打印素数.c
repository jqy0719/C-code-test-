#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//�Գ���
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	printf("��������������");
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
	printf("\n����%d��", count);
	return 0;
}