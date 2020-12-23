#define _CRT_SECURE_NO_WARNINGS 1

//字符串 双引号"",引起
//'\0'字符串结束的标志
//'\0', '\n', '\?', '\t'(水平制表符), '\\(用于表示一个反斜杠，防止它被它被解释为一个转义序列符)' ->转义字符
//斜杠（\）转义其他字符
//strlen 求字符串长度
// \ddd (ddd表示1~3个八进制的数字)如:\130 X
//  \xdd (dd表示2个十六进制数字)如：\x30 0
// %s 打印字符串
#include <stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abc";//数组
	char arr2[] = {'a','b','c'};
	char arr3[] = { 'a','b','c','\0' };
	char arr4[] = "ab\\0c";
	char arr5[] = "ab\0c";

	printf("%s\n", arr1);//abc
	//printf("%s\n", arr2);//出错
	printf("%s\n", arr3);//abc
	printf("%d\n", strlen(arr1));//3
	//printf("%d\n", strlen(arr2));//随机值
	printf("%d\n", strlen(arr3));//3

	printf("%s\n", arr4);//ab\0c
	printf("%s\n", arr5);//ab

	printf("%c\n", 'a');//a
	printf("%c\n", '\''); //'

	printf("%s\n", "\""); //"

	printf("%d\n", strlen("c:\test\32\test.c")); //13
	//\32——32是2个八进制数字
	printf("%c\n", '\32');//箭头
	printf("%c\n", '\132');//Z
	printf("%c\n", '\130');//X

	printf("%c\n", '\x30');//0
	return 0;

}