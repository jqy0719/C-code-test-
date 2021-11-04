#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	//sizeof(数组名）  此时数组名表示整个数组， 计算的是整个数组的大小，单位是字节
	//&数组名，此时数组名表示整个数组，取出的是整个数组的地址
}