#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//sizeof(��������-������������ܴ�С��λ���ֽ�-16
	//printf("%d\n", sizeof(a+0));//4/8��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ ��ַ��С��4/8�ֽ�
	//printf("%d\n", sizeof(*a));//4 ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�int��ռ4���ֽ�
	//printf("%d\n", sizeof(a+1));//4/8ͬ2  �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));//4/8  &aȡ�����������ַ����ַ��С����4/8�ֽ�
	//printf("%d\n", sizeof(*&a));//16  &a����ĵ�ַ  ����ĵ�ַ�����÷��ʵ������飬sizeof������������С
	//printf("%d\n", sizeof(&a+1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ
	//printf("%d\n", sizeof(&a[0]));//4/8��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0]+1));//4/8 �ڶ���Ԫ�صĵ�ַ
//}

//
//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6   sizeof������������С��
	//printf("%d\n", sizeof(arr+0));//4/8 ��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ ��ַ��С��4/8�ֽ�
	//printf("%d\n", sizeof(*arr));//1   ������ʶ��Ԫ�ص�ַ  *arr������Ԫ�أ�char���ַ���С1
	//printf("%d\n", sizeof(arr[1]));//1    �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));//4/8, �����ַ
	//printf("%d\n", sizeof(&arr+1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  �ڶ���Ԫ�صĵ�ַ


	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr+0));//���ֵ  ���һ���ȼ�
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ-1
//
//
//}
