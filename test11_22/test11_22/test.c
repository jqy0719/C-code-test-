#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//strtok 会改变被操作的字符串，要临时拷贝内容修改
//strtok第一个参数不是NULL将找到str中第一个标记，函数将保存在字符串中的位置
//strtok 第一个参数为NULL 函数将在同一个字符串中保存的位置开始，查找下一个标记 
//如果字符串中不存在更多标记，则返回NULL指针

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