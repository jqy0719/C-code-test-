#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//strlen��\0Ϊ������־�����ص����ַ�����\0ǰ����ֵ��ַ���������unsigned int 
//strcpy ��strcatԭ�ַ���������\0�������һᱻ���� Ŀ��ռ�����㹻���ҿɱ�
//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcֻ����ַ�����destָ��Ŀռ����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
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