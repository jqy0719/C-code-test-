//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int Fib1(int n)//Ч��̫�� ��ʱ�临�Ӷ�Ϊ2^n,�ݹ鲢���ʺϽ������ּ���
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int Fib2(int n)//ѭ����Ч�ʸ���
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("��%d��쳲���������%d\n", n, ret);
//	return 0;
//
//}