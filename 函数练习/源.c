#define _CRT_SECURE_NO_WARNINGS

//char - 也属于整形家族的
//因为字符存储的时候，存储的是ASCII值

//写代码将3个整数从大到小输出

//#include <stdio.h>
//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	int tmp = 0;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1~100之间所有3的倍数的数字

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//}


//给定两个数，求这两个数的最大公约数

//#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//最小公倍数就是  a*b/最大公约数

//编写程序数一下 1~100的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//			count++;
//		//判断十位是不是9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值，打印出来
//分子总是1
//分母是1~100

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中的最大值

//#include <stdio.h>
//
//int main()
//{
//	//这是一个错误示范
//	//准备10个整数
//	int arr[] = { 0 };
//	//int arr[1] = { 0 };
//	//这里没有指定数组的元素个数，就会根据初始化的内容来推算元素的个数
//	
//	//输入数字
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=1 2*2=4
//3*1=3 3*2=6 3*3=9
//……

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		//打印9行
		for (j = 1; j <= i; j++)
		{
			//打印1行
			printf("%d*%d=%-2d\t", i,j,i*j);//%2d右对齐  %-2d左对齐
		}
		printf("\n");
	}
	return 0;
}