//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("********************************\n");
//	printf("****   1.play      0.exit   ****\n");
//	printf("********************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guest = 0;
//	ret = rand()%100+1;//生成1-100之间随机数
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guest);
//		if (guest > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guest < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("你猜对了！\n");
//			break;
//		}
//			
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//用时间戳设置随机数的生成起始点
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}