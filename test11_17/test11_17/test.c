#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//(*(void(*)())0)();//��0ǿ������ת����void��*����������ָ������-0����һ�������ĵ�ַ
//                  //����0��ַ���ĸú���
//
//void(*signal(int, void(*)(int)))(int);//signal��һ������������������2��һ����int ��һ���Ǻ���ָ�루ָ��ĺ����Ĳ�����int����������void��
//                                      //signal�����ķ�������Ҳ��һ������ָ�� ָ��ĺ����Ĳ�����int����������void
//
//
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("**  1.add   *********   2.sub  **\n");
//	printf("**  3.mul   *********   4.div  **\n");
//	printf("*********     0.exit        *****\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//
//		/*printf("������������������");
//		scanf("%d%d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}*/
//
//	} while (input);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ֻ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�����ʵ��һ������ָ�� int(*)(int ,int )
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;
//	//void* ���͵�ָ����Խ����������͵ĵ�ַ
//	//void* l���͵�ָ�벻�ܽ��н����ò���
//	//void*���͵�ָ�벻�۽���+-�����Ĳ���
//}