#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//strtok ��ı䱻�������ַ�����Ҫ��ʱ���������޸�
//strtok��һ����������NULL���ҵ�str�е�һ����ǣ��������������ַ����е�λ��
//strtok ��һ������ΪNULL ��������ͬһ���ַ����б����λ�ÿ�ʼ��������һ����� 
//����ַ����в����ڸ����ǣ��򷵻�NULLָ��

int main()
{
	/*char arr[] = "jqy@qq.com";
	char* p = "@.";*/
	char arr[] = "192.168.31.121";
	char* p = ".";

	char buf[1024] = { 0 };
	strcpy(buf, arr);

	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL;ret =strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
}