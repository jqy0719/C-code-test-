#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "hello world!!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//上同int right  = sizeof(arr1)/sizeof(arr1[0])-2;字符串后默认有“\n”会被计入下标
//	//strlen的头文件<string.h>
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//停留一秒，头文件<windows.h>，单位：ms
//		system("cls");//system:执行系统命令的一个函数    cls：清空屏幕    头文件：<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}