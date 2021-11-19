#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7  数组的大小含有\0
	//printf("%d\n", sizeof(arr+0));//4/8 首地址的大小
	//printf("%d\n", sizeof(*arr));//1 *arr是首元素，首元素大小
	//printf("%d\n", sizeof(arr[1]));//1   计算的是第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8  地址的大小
	//printf("%d\n", sizeof(&arr+1));//4/8  地址的大小
	//printf("%d\n", sizeof(&arr[0]+1));//4/8  大二哥第二个元素的地址的大小

	//printf("%d\n", strlen(arr));//6  
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6    数组指针  char（*p）[7}=&arr
	//printf("%d\n", strlen(&arr + 1));//随机值   
	//printf("%d\n", strlen(&arr[0] + 1));//5  


	//char *p = "abcdef";//p存放的是a的地址
	//printf("%d\n", sizeof(p));//4/8  计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//4/8   p+1字符b的地址大小
	//printf("%d\n", sizeof(*p));//1  *p字符串的第一个字符
	//printf("%d\n", sizeof(p[0]));//1   p[0] == *(p+0) =='a'
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}