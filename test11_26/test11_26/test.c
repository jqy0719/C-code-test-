#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct S
{
	int  n;
	int arr[0];
	//δ֪��С�����������Ա����Ĵ�С�ǿ��Ե�����
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}