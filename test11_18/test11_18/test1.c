#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  ����Ĵ�С����\0
	//printf("%d\n", sizeof(arr+0));//4/8 �׵�ַ�Ĵ�С
	//printf("%d\n", sizeof(*arr));//1 *arr����Ԫ�أ���Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));//1   ������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8  ��ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr+1));//4/8  ��ַ�Ĵ�С
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  �����ڶ���Ԫ�صĵ�ַ�Ĵ�С

	//printf("%d\n", strlen(arr));//6  
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6    ����ָ��  char��*p��[7}=&arr
	//printf("%d\n", strlen(&arr + 1));//���ֵ   
	//printf("%d\n", strlen(&arr[0] + 1));//5  


	//char *p = "abcdef";//p��ŵ���a�ĵ�ַ
	//printf("%d\n", sizeof(p));//4/8  ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4/8   p+1�ַ�b�ĵ�ַ��С
	//printf("%d\n", sizeof(*p));//1  *p�ַ����ĵ�һ���ַ�
	//printf("%d\n", sizeof(p[0]));//1   p[0] == *(p+0) =='a'
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}