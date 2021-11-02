//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////当实参传给形参的时候，形参是实参的一份临时拷贝，对形参的修改是不会改变实参的
//void Swap1(int x, int y)//只把ab的值赋给xy并不是对ab进行操作
//
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}