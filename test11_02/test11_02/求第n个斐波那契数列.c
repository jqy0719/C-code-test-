//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int Fib1(int n)//效率太低 ，时间复杂度为2^n,递归并不适合进行这种计算
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int Fib2(int n)//循环的效率更高
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
//	printf("第%d个斐波那契数是%d\n", n, ret);
//	return 0;
//
//}