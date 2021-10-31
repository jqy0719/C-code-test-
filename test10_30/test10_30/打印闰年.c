//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int year1 = 0;
//	int year2 = 0;
//	int a = 0;
//	int count = 0;
//	printf("请依次输入年份：");
//	scanf("%d%d", &year1,&year2);
//	if (year1 <= year2)
//	{
//		for (a = year1; a <= year2; a++)
//		{
//			if (a % 4 == 0 && a % 100 != 0)
//			{
//				printf("%d ", a);
//				count++;
//			}
//			else if (a % 400 == 0)
//			{
//				printf("%d ", a);
//				count++;
//			}
//		}
//		printf("\n共计%d年\n", count);
//	}
//	else
//	{
//		printf("数据格式错误，退出程序\n");
//	}
//	return 0;
//}