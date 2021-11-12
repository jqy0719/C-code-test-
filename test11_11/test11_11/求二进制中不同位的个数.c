#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////int count_one(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		n = n & (n - 1);
////		count++;
////	}
////	return count;
////}
//
//int get_diff(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	/*return count_one(tmp);*/
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//	
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,&n);
//	int count = get_diff(m, n);
//	printf("count = %d\n", count);
//
//	return 0;
//}