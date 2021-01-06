#define _CRT_SECURE_NO_WARNINGS 1

//宏的定义

//#define ADD(X, Y)((X)+(Y))
//
//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int SUM = ADD(a, b);
//             
//	printf("max = %d\n", SUM);
//	return 0;
//}


//指针
//
//#include<stdio.h>

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址，存放地址的指针变量
//	printf("%p\n", &a);
//
//	printf("%p\n", p);
//	*p = 20;//解引用操作符
//	printf("a = %d\n", a);
//	
//
//	return 0;
//}


//int main()
//{
//	char c = "w";
//	char* cp = &c;
//	*cp = 'a';
//	printf("%c\n", c)
//		;
//	return 0;
//}

//结构体

#include<stdio.h>
struct Buch
{

	char Name[20];
	int Preise;

};
int main()
{
	struct Buch B1 = { "C-Sprach",55 };
	printf("Name:%s\n", B1.Name);
	printf("Prese:%d元\n", B1.Preise);

	B1.Preise = 15;
	printf("修改后的价格：%d\n", B1.Preise);

	struct Buch *p = &B1;
	printf("%d\n",p -> Preise);
	printf("%d\n", (*p).Preise);
	return 0;
}


