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
//	//��ͬint right  = sizeof(arr1)/sizeof(arr1[0])-2;�ַ�����Ĭ���С�\n���ᱻ�����±�
//	//strlen��ͷ�ļ�<string.h>
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ͣ��һ�룬ͷ�ļ�<windows.h>����λ��ms
//		system("cls");//system:ִ��ϵͳ�����һ������    cls�������Ļ    ͷ�ļ���<stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}