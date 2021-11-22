#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//strlen以\0为结束标志，返回的是字符串中\0前面出现的字符个数，是unsigned int 
//strcpy 、strcat原字符串必须以\0结束并且会被拷贝 目标空间必须足够大且可变
//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src只想的字符串到dest指向的空间包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("::%s\n", arr1);
//	return 0;
//}