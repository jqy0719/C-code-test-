#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�ṹ��������(�ռ任ʱ�䣩
//��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
//������Ա����Ҫ���뵽ĳ�����ֵ��������ĵ�ַ��
//�ṹ����ܴ�СΪ���������������
//���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������ṹ��������С�����������������������
//#pragma pack(4)����Ĭ�϶�����
//#pragma pack() ȡ�����õ�Ĭ�϶�����
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//}


struct S
{
	int a:2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//8zijie 
	return 0;
}