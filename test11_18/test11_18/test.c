#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//sizeof(数组名）-计算的是数组总大小单位是字节-16
	//printf("%d\n", sizeof(a+0));//4/8数组名表示首元素地址，a+0还是首元素地址 地址大小是4/8字节
	//printf("%d\n", sizeof(*a));//4 数组名表示首元素地址，*a就是首元素，int形占4个字节
	//printf("%d\n", sizeof(a+1));//4/8同2  第二个元素地址
	//printf("%d\n", sizeof(a[1]));//4 第二个元素大小
	//printf("%d\n", sizeof(&a));//4/8  &a取出的是数组地址，地址大小就是4/8字节
	//printf("%d\n", sizeof(*&a));//16  &a数组的地址  数组的地址解引用访问的是数组，sizeof计算的是数组大小
	//printf("%d\n", sizeof(&a+1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址
	//printf("%d\n", sizeof(&a[0]));//4/8第一个元素的地址
	//printf("%d\n", sizeof(&a[0]+1));//4/8 第二个元素的地址
//}

//
//int main()
//{
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6   sizeof计算的是数组大小，
	//printf("%d\n", sizeof(arr+0));//4/8 数组名表示首元素地址，a+0还是首元素地址 地址大小是4/8字节
	//printf("%d\n", sizeof(*arr));//1   爱人认识首元素地址  *arr就是首元素，char形字符大小1
	//printf("%d\n", sizeof(arr[1]));//1    第二个元素大小
	//printf("%d\n", sizeof(&arr));//4/8, 数组地址
	//printf("%d\n", sizeof(&arr+1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  第二个元素的地址


	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值  与第一个等价
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值-6
	//printf("%d\n", strlen(&arr[0]+1));//随机值-1
//
//
//}
