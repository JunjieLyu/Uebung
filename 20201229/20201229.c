#define _CRT_SECURE_NO_WARNINGS 1

//  选择语句

//#include <stdio.h>

//int main()
//{
//	int input = 0;
//	printf("Studium\n");
//	printf("fleissig？(1/0)>:");
//	scanf("%d", &input); // 1/0
//
//
//	if (input == 1)
//	{
//		printf("gut offer\n");
//	}
//	else
//	{
//		printf("nach Hause\n");
//	}
//	return 0;
//}


// 循环语句 while

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int line = 0;
//	printf("lernen\n");
//	while (line<200)
//	{
//		printf("programmieren:%d\n",line);
//		line++;
//	}
//	if(line>=200)
//	printf("gute Arbeit");
//	return 0;
//}


//函数(库函数，自定义函数)
//函数的特点 简化代码

//#include<stdio.h>
//
//int Add(int x, int y) // （Add:函数名 。x,y:函数的参数。int:函数返回的类型）
//
//{   //（{}：函数体）
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum = 0;
//	int a = 100;1234
//	int b = 200;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//数组：一组相同类型元素的集合

#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组
	//数组的下标从“0”开始
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	//char ch[20];
	//float arr2[5];

	return 0;
}