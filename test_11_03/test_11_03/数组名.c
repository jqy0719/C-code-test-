#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	//sizeof(��������  ��ʱ��������ʾ�������飬 ���������������Ĵ�С����λ���ֽ�
	//&����������ʱ��������ʾ�������飬ȡ��������������ĵ�ַ
}