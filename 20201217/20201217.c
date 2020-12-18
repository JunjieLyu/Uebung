#define _CRT_SECURE_NO_WARNINGS 1
////第一个程序
////int 是整型的意思
////main前面的int表示main函数调用返回一个整型值

//#include<stdio.h>
//int main()//主函数-程序的入口
//{
//	printf("hello world");//库函数 -C语言本身提供给我们的函数
//	return 0;//返回 0
//}


//数据类型
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字
//%p - 以地址的形式打印
//%x - 打印十六进制
//%o - 打印


//#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//		printf("%c\n", ch);//%c--打印字符格式的数据
//
//		int age = 20;
//		printf("%d\n", age);//%d--打印整型十进制数据
//		printf("%o\n", age);
//		printf("%x\n", age);
//
//		float f = 5.0;
//		printf("%f\n", f);
//
//		double pi = 3.14;
//		printf("%lf\n", pi);
//		//char-字符类型
//		//short int-短整型
//		//int-整型
//		//long-长整型
//	return 0;
//}



//不同数据类型所占内存字节大小
//bit -比特位
//byte - 字节
//kb
//mb
//gb
//tb
//pb

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 或 8 C语言标准规定 sizeof（long）>=sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(1));//4
//	printf("%d\n", sizeof(2.0));//8
//  printf("%d\n", sizeof(2.0f));//4
//	return 0;
//}



//常量 变量
//局部变量 全局变量


//#include<stdio.h>
//
//int num2 = 20;//全局变量——定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量——定义在代码块（{}）内部
//
//	return 0;
//}


//#include<stdio.h>
//int a = 100;
//
//int main()
//{
//	/*int a = 10;*/
//	printf("%d\n", a);
//	return 0;
//}

//全局变量的作用域是整个工程
//局部变量的作用域是变量所在的局部范围
//C语言语法规定，变量要定义在当前代码块的最前面
//两数相加

//#include<stdio.h>
//int main()
//{
	//int num1=0;
//	int num2 = 0;
//	int sum = 0;
//	
//	scanf("%d%d", &num1, &num2);//&取地址符 ,输入数据——使用输入函数scanf
//
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//extern 声明外部符号
//extern int g_val;

//字面常量
//const修饰的常变量——本质是变量，但是有常属性
//#define定义的标识符常量
//枚举常量

#include<stdio.h>
#define Max 10
enum SEX
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum SEX s = MALE;
	s = FEMALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("%d\n", s);
	return 0;
}

