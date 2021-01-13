#define _CRT_SECURE_NO_WARNINGS 1

// 选择与循环

// 选择

//#include<stdio.h>
//int main()
//{
//	int age = 1000;
//
//	if (age < 18)
//		printf("未成年/n");
//	else if (18 <= age && age < 28)
//		printf("青年/n");
//	else if (28 <= age && age < 50)
//		printf("壮年/n");
//	else if (50 <= age && age < 90)
//		printf("老年/n");
//	else
//		printf("老不s");
//
//
//
//	return 0;
//}


//在c语言中 0表示假，非0表示真

//如果条件成立，要执行多条语句，应该使用  {}代码块
//
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (18 <= age && age < 28)
//		printf("青年\n");
//	else if (28 <= age && age < 50)
//		printf("壮年\n");
//	else if (50 <= age && age < 90)
//		printf("老年\n");
//	else
//		printf("老不s");
//
//
//
//	return 0;
//}




// 判断一个数是否为奇数
// 输出1-100之间的奇数

//#include<stdio.h>
//int main()
//{
//
//	int a = 1;
//	while (a <= 100)
//	{
//		if (1 == a % 2)
//			printf("奇数:%d\n",a);
//		/*else
//			printf("a ist Geradezahl\n");*/
//		else
//			printf("偶数:%d\n", a);
//		a++;
//	}
//	return 0;
//}


//switch...case 分支语句
//
//#include<stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	    case 1:
//			printf("heute ist Montag\n");
//			break;
//		case 2:
//			printf("heute ist Dienstag\n");
//			break;
//		case 3:
//		    printf("heute ist Mittwoch\n");
//			break;
//		case 4:
//			printf("heute ist Donnerstag\n");
//			break;
//		case 5:
//			printf("heute ist Freitag\n");
//			break;
//		case 6:
//			printf("heute ist Samstag\n");
//			break;
//		case 7:
//			printf("heute ist Sontag\n");
//			break;// 既使最后一个最好也加一个break
//		default:
//			printf("falsch");
//
//	}
//	return 0;
//}


// 循环
// while
// do...while
//for

//continue
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl (strg) + z
//	// EOF - end of file --> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}