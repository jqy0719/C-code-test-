#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针 
//是编程预压你的一个对象，利用地址，他的值直接指向存在电脑存储器中另一个地方的值，地址指向该变量单元，称为指针
//其实就是存放地址的变量,存放在指针中的值被当成地址处理
//
//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
//
//指针类型决定了指针进行解引用操作的时候，能够访问的空间的大小
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);

	return 0;

}
//指针类型决定了：指针走一步走多远
//int*p:p+1    4
//char* p;p+1  1
//double*p; p+1   8
//野指针：指针指向的位置是不可知的
//1.指针未初始化
//
//2.指针越界访问
//
//3.指针指向的空间释放
//如何避免？
//
//1.指针初始化
//
//2.小心指针越界
//
//3.指针指向空间释放及时置NULL
//
//4.之魂使用之前检查有效性