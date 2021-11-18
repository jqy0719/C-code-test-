#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//(*(void(*)())0)();//吧0强制类型转换成void（*）（）函数指针类型-0就是一个函数的地址
//                  //调用0地址处的该函数
//
//void(*signal(int, void(*)(int)))(int);//signal是一个函数声明。参数有2个一个是int 另一个是函数指针（指向的函数的参数是int返回类型是void）
//                                      //signal函数的返回类型也是一个函数指针 指向的函数的参数是int返回类型是void
//
//
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
////写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
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
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//
//		/*printf("请输入两个操作数：");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}*/
//
//	} while (input);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针只想的数组有4个元素
//	//指向的数组的每个元素的类型实在一个函数指针 int(*)(int ,int )
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;
//	//void* 类型的指针可以接受任意类型的地址
//	//void* l类型的指针不能进行解引用操作
//	//void*类型的指针不嫩进行+-整数的操作
//}