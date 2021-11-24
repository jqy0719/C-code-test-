#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//结构体对齐规则(空间换时间）
//第一个成员在结构体变量偏移量为0的地址处
//其他成员变量要对齐到某个数字的整数倍的地址处
//结构体的总大小为最大对其书的整数倍
//如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对其书的整数倍处，结构体的整体大小就是所有最大对其书的整数倍
//#pragma pack(4)设置默认对齐数
//#pragma pack() 取消设置的默认对齐书
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