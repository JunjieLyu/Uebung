#define _CRT_SECURE_NO_WARNINGS 1

// ѡ����ѭ��

// ѡ��

//#include<stdio.h>
//int main()
//{
//	int age = 1000;
//
//	if (age < 18)
//		printf("δ����/n");
//	else if (18 <= age && age < 28)
//		printf("����/n");
//	else if (28 <= age && age < 50)
//		printf("׳��/n");
//	else if (50 <= age && age < 90)
//		printf("����/n");
//	else
//		printf("�ϲ�s");
//
//
//
//	return 0;
//}


//��c������ 0��ʾ�٣���0��ʾ��

//�������������Ҫִ�ж�����䣬Ӧ��ʹ��  {}�����
//
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (18 <= age && age < 28)
//		printf("����\n");
//	else if (28 <= age && age < 50)
//		printf("׳��\n");
//	else if (50 <= age && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ�s");
//
//
//
//	return 0;
//}




// �ж�һ�����Ƿ�Ϊ����
// ���1-100֮�������

//#include<stdio.h>
//int main()
//{
//
//	int a = 1;
//	while (a <= 100)
//	{
//		if (1 == a % 2)
//			printf("����:%d\n",a);
//		/*else
//			printf("a ist Geradezahl\n");*/
//		else
//			printf("ż��:%d\n", a);
//		a++;
//	}
//	return 0;
//}


//switch...case ��֧���
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
//			break;// ��ʹ���һ�����Ҳ��һ��break
//		default:
//			printf("falsch");
//
//	}
//	return 0;
//}


// ѭ��
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