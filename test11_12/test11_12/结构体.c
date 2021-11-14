#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构  
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//结构的声明
//struct tag
//{
//	member-list；
//}variable-list;
//描述一个学生的数据
//struct Stu//struct 结构体关键字  Stu结构体标签 struct Stu结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个都是全局变量
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = { "张三",20,"1234678911","男" };//局部变量
//	Stu s2 = { "旺财",30,"01234567890","保密" };//初始化
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch [10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//结构体传参
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//}
//
//int main()
//{
//	Stu s = { "李四",40,"01234567899","男" };
//	Print1(s);
//	Print2(&s);
//}
//结构体传参时，参数需要压栈的，系统开销较大，在传参时要穿结构体地址