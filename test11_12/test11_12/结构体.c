#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ  
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//�ṹ������
//struct tag
//{
//	member-list��
//}variable-list;
//����һ��ѧ��������
//struct Stu//struct �ṹ��ؼ���  Stu�ṹ���ǩ struct Stu�ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//��������ȫ�ֱ���
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = { "����",20,"1234678911","��" };//�ֲ�����
//	Stu s2 = { "����",30,"01234567890","����" };//��ʼ��
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

//�ṹ�崫��
//typedef struct Stu
//{
//	//��Ա����
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
//	Stu s = { "����",40,"01234567899","��" };
//	Print1(s);
//	Print2(&s);
//}
//�ṹ�崫��ʱ��������Ҫѹջ�ģ�ϵͳ�����ϴ��ڴ���ʱҪ���ṹ���ַ