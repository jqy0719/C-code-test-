#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int arr[5];//arr是一个5个元素的整型数组
int *parr1[10];//parr1是一个数组。数组有10个元素，每个元素的类型是int*，parr1是指针数组
int(*parr2)[10];//parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int  parr2是数组指针
int(*parr3[10])[5];//parr3是有一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int


//数组指针  指向数组的指针
//函数指针  指向函数的指针	
  