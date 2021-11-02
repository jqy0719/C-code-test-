#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Add(int* p)
{
                                                                                                                                   
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);

	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印字符的个数，即先打印43后返回2在打印2返回1在打印1
	return 0;
}