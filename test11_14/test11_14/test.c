#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// 类型的意义
//1.使用这个类型开辟内存空间的大小（大小决定了使用范围）
//2.如何看待内存空间的视角
//void 表示空类型
//通常应用于函数的返回类型，函数的参数，指针类型
//
//原码 反码 补码
//.......
//数据存放在内存中是存放补码
//使用补码，可以将符号位和数值域统一处理，加法和减法 也可以统一处理
//大端 、小端
//....
//
//判断当前机器的字节序
//int check_sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else 
//	{
//		printf("大端\n");
//	}
//	return 0;
//}




