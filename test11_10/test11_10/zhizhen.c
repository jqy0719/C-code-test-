#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ָ��-ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}
//ָ��-ָ��õ������м��Ԫ�ظ���
//
//
//int my_strlen(char* str)//�Զ��庯������ָ��ʵ��strlen��������
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen  ���ַ�������
//	//
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}
//
//ָ��Ĺ�ϵ����
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ��������������
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//����
//1.&arr-&������-ȡ��������������ĵ�ַ
//2.sizeof��arr��-sizeof����������-���������������Ĵ�С
//
//
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}
//
//
//ָ�����飨�����飩-���ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int arr[10];*/
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//}
//
