#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//指针-指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}
//指针-指针得到的是中间的元素个数
//
//
//int my_strlen(char* str)//自定义函数运用指针实现strlen函数功能
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
//	//strlen  求字符串长度
//	//
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}
//
//指针的关系运算
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//但不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名：代表首元素的地址（绝大多数情况）
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
//特例
//1.&arr-&数组名-取出的是整个数组的地址
//2.sizeof（arr）-sizeof（数组名）-计算的是整个数组的大小
//
//
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	return 0;
//}
//
//
//指针数组（是数组）-存放指针的数组
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
