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
//	ret = rand()%100+1;//����1-100֮�������
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &guest);
//		if (guest > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guest < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��¶��ˣ�\n");
//			break;
//		}
//			
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ��������������������ʼ��
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}